#pragma once
#include <string>
#include <DirectXTex.h>

class TextureConverter
{
public:
	/// <summary>
	///	�e�N�X�`����WI����DDS�ɕϊ�����
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	/// <summary>
	///	�e�N�X�`���t�@�C���ǂݍ���
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void LoadWICTextureFromFile(const std::string& filePath);


private:
	/// <summary>
	///	�}���`�o�C�g����������C�h������ɕϊ�
	/// </summary>
	/// <param name="mString">�}���`�o�C�g������</param>
	/// <returns>���C�h������</returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
	 
private:
	/// <summary>
	/// �t�H���_�p�X�ƃt�@�C�����𕪗�����
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param> 
	void SeparateFilePath(const std::wstring& filePath);

private:
	/// <summary>
	/// DDS�e�N�X�`���Ƃ��ăt�@�C�������o��
	/// </summary>
	void SaveDDSTextureToFile();
	
private:
	// �摜�̏��
	DirectX::TexMetadata metadata_;
	// �摜�C���[�W�̃R���e�i
	DirectX::ScratchImage scratchImage_;

	// �f�B���N�g���p�X
	std::wstring directoryPath_;
	// �t�@�C����
	std::wstring fileName_;
	// �t�@�C���g���q
	std::wstring fileExt_;
};

