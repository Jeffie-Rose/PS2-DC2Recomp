#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__17CSWordAfterEffectFR17CSWordAfterEffectP9mgCMemory
// Address: 0x2f5ff0 - 0x2f61ac
void Copy__17CSWordAfterEffectFR17CSWordAfterEffectP9mgCMemory_0x2f5ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__17CSWordAfterEffectFR17CSWordAfterEffectP9mgCMemory_0x2f5ff0");
#endif

    switch (ctx->pc) {
        case 0x2f6148u: goto label_2f6148;
        case 0x2f6158u: goto label_2f6158;
        case 0x2f617cu: goto label_2f617c;
        case 0x2f618cu: goto label_2f618c;
        default: break;
    }

    ctx->pc = 0x2f5ff0u;

    // 0x2f5ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f5ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f5ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f5ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f5ff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f5ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f5ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f5ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f6000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f6000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f6004: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6008: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f6008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f600c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6010: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f6010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6014: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2f6014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2f6018: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f6018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f601c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2f601cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2f6020: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2f6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f6024: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2f6024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2f6028: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f6028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f602c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2f602cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2f6030: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2f6030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f6034: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2f6034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x2f6038: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2f6038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f603c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2f603cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2f6040: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x2f6040u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2f6044: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x2f6044u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x2f6048: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x2f6048u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2f604c: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x2f604cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x2f6050: 0xc4830040  lwc1        $f3, 0x40($a0)
    ctx->pc = 0x2f6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6054: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x2f6054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6058: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x2f6058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f605c: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2f605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6060: 0xe4a30040  swc1        $f3, 0x40($a1)
    ctx->pc = 0x2f6060u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x2f6064: 0xe4a20044  swc1        $f2, 0x44($a1)
    ctx->pc = 0x2f6064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x2f6068: 0xe4a10048  swc1        $f1, 0x48($a1)
    ctx->pc = 0x2f6068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x2f606c: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x2f606cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x2f6070: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x2f6070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6074: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x2f6074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6078: 0xe4a10050  swc1        $f1, 0x50($a1)
    ctx->pc = 0x2f6078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x2f607c: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x2f607cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x2f6080: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x2f6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2f6084: 0xaca30058  sw          $v1, 0x58($a1)
    ctx->pc = 0x2f6084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 3));
    // 0x2f6088: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2f6088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2f608c: 0xaca3005c  sw          $v1, 0x5C($a1)
    ctx->pc = 0x2f608cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 3));
    // 0x2f6090: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x2f6090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2f6094: 0xaca30060  sw          $v1, 0x60($a1)
    ctx->pc = 0x2f6094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
    // 0x2f6098: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x2f6098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2f609c: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x2f609cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x2f60a0: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x2f60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2f60a4: 0xaca30068  sw          $v1, 0x68($a1)
    ctx->pc = 0x2f60a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 3));
    // 0x2f60a8: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x2f60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2f60ac: 0xaca3006c  sw          $v1, 0x6C($a1)
    ctx->pc = 0x2f60acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 3));
    // 0x2f60b0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2f60b4: 0xaca30070  sw          $v1, 0x70($a1)
    ctx->pc = 0x2f60b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
    // 0x2f60b8: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2f60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2f60bc: 0xaca30074  sw          $v1, 0x74($a1)
    ctx->pc = 0x2f60bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 3));
    // 0x2f60c0: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2f60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2f60c4: 0xaca30078  sw          $v1, 0x78($a1)
    ctx->pc = 0x2f60c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 3));
    // 0x2f60c8: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2f60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2f60cc: 0xaca3007c  sw          $v1, 0x7C($a1)
    ctx->pc = 0x2f60ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 3));
    // 0x2f60d0: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x2f60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f60d4: 0xaca30080  sw          $v1, 0x80($a1)
    ctx->pc = 0x2f60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
    // 0x2f60d8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x2f60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2f60dc: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x2f60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
    // 0x2f60e0: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2f60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2f60e4: 0xaca30088  sw          $v1, 0x88($a1)
    ctx->pc = 0x2f60e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 3));
    // 0x2f60e8: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2f60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2f60ec: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x2f60ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
    // 0x2f60f0: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x2f60f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2f60f4: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x2f60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
    // 0x2f60f8: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x2f60f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f60fc: 0xe4a00094  swc1        $f0, 0x94($a1)
    ctx->pc = 0x2f60fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
    // 0x2f6100: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x2f6100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6104: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F6104u;
    {
        const bool branch_taken_0x2f6104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6104u;
            // 0x2f6108: 0xe4a00098  swc1        $f0, 0x98($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6104) {
            ctx->pc = 0x2F6190u;
            goto label_2f6190;
        }
    }
    ctx->pc = 0x2F610Cu;
    // 0x2f610c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x2f610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2f6110: 0x8c850078  lw          $a1, 0x78($a0)
    ctx->pc = 0x2f6110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2f6114: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2f6114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2f6118: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2f6118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f611c: 0x5113c  dsll32      $v0, $a1, 4
    ctx->pc = 0x2f611cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 4));
    // 0x2f6120: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2f6120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f6124: 0x2113f  dsra32      $v0, $v0, 4
    ctx->pc = 0x2f6124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 4));
    // 0x2f6128: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6128u;
    {
        const bool branch_taken_0x2f6128 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6128u;
            // 0x2f612c: 0x39100  sll         $s2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6128) {
            ctx->pc = 0x2F6138u;
            goto label_2f6138;
        }
    }
    ctx->pc = 0x2F6130u;
    // 0x2f6130: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x2f6130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2f6134: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f6134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2f6138:
    // 0x2f6138: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2f6138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f613c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6140: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F6140u;
    SET_GPR_U32(ctx, 31, 0x2F6148u);
    ctx->pc = 0x2F6144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6140u;
            // 0x2f6144: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6148u; }
        if (ctx->pc != 0x2F6148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6148u; }
        if (ctx->pc != 0x2F6148u) { return; }
    }
    ctx->pc = 0x2F6148u;
label_2f6148:
    // 0x2f6148: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f6148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f614c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f614cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2f6150: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F6150u;
    SET_GPR_U32(ctx, 31, 0x2F6158u);
    ctx->pc = 0x2F6154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6150u;
            // 0x2f6154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6158u; }
        if (ctx->pc != 0x2F6158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6158u; }
        if (ctx->pc != 0x2F6158u) { return; }
    }
    ctx->pc = 0x2F6158u;
label_2f6158:
    // 0x2f6158: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2f6158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2f615c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F615Cu;
    {
        const bool branch_taken_0x2f615c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2F6160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F615Cu;
            // 0x2f6160: 0x121103  sra         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f615c) {
            ctx->pc = 0x2F616Cu;
            goto label_2f616c;
        }
    }
    ctx->pc = 0x2F6164u;
    // 0x2f6164: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x2f6164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2f6168: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f6168u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2f616c:
    // 0x2f616c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x2f616cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6174: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F6174u;
    SET_GPR_U32(ctx, 31, 0x2F617Cu);
    ctx->pc = 0x2F6178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6174u;
            // 0x2f6178: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F617Cu; }
        if (ctx->pc != 0x2F617Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F617Cu; }
        if (ctx->pc != 0x2F617Cu) { return; }
    }
    ctx->pc = 0x2F617Cu;
label_2f617c:
    // 0x2f617c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f6180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6184: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F6184u;
    SET_GPR_U32(ctx, 31, 0x2F618Cu);
    ctx->pc = 0x2F6188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6184u;
            // 0x2f6188: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F618Cu; }
        if (ctx->pc != 0x2F618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F618Cu; }
        if (ctx->pc != 0x2F618Cu) { return; }
    }
    ctx->pc = 0x2F618Cu;
label_2f618c:
    // 0x2f618c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2f618cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2f6190:
    // 0x2f6190: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f6190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f6194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f619c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f619cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f61a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f61a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f61a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F61A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F61A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F61A4u;
            // 0x2f61a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F61ACu;
}
