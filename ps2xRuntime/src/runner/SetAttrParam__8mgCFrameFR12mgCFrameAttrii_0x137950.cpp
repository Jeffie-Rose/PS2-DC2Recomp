#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAttrParam__8mgCFrameFR12mgCFrameAttrii
// Address: 0x137950 - 0x137d30
void SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950");
#endif

    switch (ctx->pc) {
        case 0x137cf4u: goto label_137cf4;
        case 0x137d08u: goto label_137d08;
        default: break;
    }

    ctx->pc = 0x137950u;

label_137950:
    // 0x137950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x137958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13795c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137964: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x137964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137968: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x13796c: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x13796Cu;
    {
        const bool branch_taken_0x13796c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13796Cu;
            // 0x137970: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13796c) {
            ctx->pc = 0x137CE0u;
            goto label_137ce0;
        }
    }
    ctx->pc = 0x137974u;
    // 0x137974: 0x16000044  bnez        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x137974u;
    {
        const bool branch_taken_0x137974 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x137978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137974u;
            // 0x137978: 0x32050001  andi        $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137974) {
            ctx->pc = 0x137A88u;
            goto label_137a88;
        }
    }
    ctx->pc = 0x13797Cu;
    // 0x13797c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13797cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137980: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x137980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x137984: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x137988: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x137988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x13798c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x137990: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x137990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x137994: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x137994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x137998: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x137998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x13799c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x13799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1379a0: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1379a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x1379a4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1379a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1379a8: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x1379a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x1379ac: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1379acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1379b0: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x1379b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x1379b4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1379b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1379b8: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x1379b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x1379bc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1379bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1379c0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1379c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1379c4: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1379c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1379c8: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x1379c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x1379cc: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1379ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1379d0: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x1379d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x1379d4: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x1379d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1379d8: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x1379d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x1379dc: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1379dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1379e0: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x1379e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x1379e4: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1379e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1379e8: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x1379e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
    // 0x1379ec: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1379ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1379f0: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1379f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1379f4: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x1379f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1379f8: 0xac65003c  sw          $a1, 0x3C($v1)
    ctx->pc = 0x1379f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 5));
    // 0x1379fc: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1379fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x137a00: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x137a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x137a04: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x137a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137a08: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x137a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x137a0c: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x137a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x137a10: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x137a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x137a14: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x137a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x137a18: 0xac65004c  sw          $a1, 0x4C($v1)
    ctx->pc = 0x137a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 5));
    // 0x137a1c: 0xc6230050  lwc1        $f3, 0x50($s1)
    ctx->pc = 0x137a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137a20: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x137a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137a24: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x137a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137a28: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x137a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137a2c: 0xe4630050  swc1        $f3, 0x50($v1)
    ctx->pc = 0x137a2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x137a30: 0xe4620054  swc1        $f2, 0x54($v1)
    ctx->pc = 0x137a30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x137a34: 0xe4610058  swc1        $f1, 0x58($v1)
    ctx->pc = 0x137a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x137a38: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x137a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x137a3c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x137a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x137a40: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x137a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x137a44: 0xc6230070  lwc1        $f3, 0x70($s1)
    ctx->pc = 0x137a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137a48: 0xc6220074  lwc1        $f2, 0x74($s1)
    ctx->pc = 0x137a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137a4c: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x137a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137a50: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x137a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137a54: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x137a54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x137a58: 0xe4620074  swc1        $f2, 0x74($v1)
    ctx->pc = 0x137a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x137a5c: 0xe4610078  swc1        $f1, 0x78($v1)
    ctx->pc = 0x137a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x137a60: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x137a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x137a64: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x137a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x137a68: 0xac650080  sw          $a1, 0x80($v1)
    ctx->pc = 0x137a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 5));
    // 0x137a6c: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x137a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x137a70: 0xac650084  sw          $a1, 0x84($v1)
    ctx->pc = 0x137a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 5));
    // 0x137a74: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x137a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x137a78: 0xac650088  sw          $a1, 0x88($v1)
    ctx->pc = 0x137a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 5));
    // 0x137a7c: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x137a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137a80: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x137A80u;
    {
        const bool branch_taken_0x137a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A80u;
            // 0x137a84: 0xe460008c  swc1        $f0, 0x8C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a80) {
            ctx->pc = 0x137CE0u;
            goto label_137ce0;
        }
    }
    ctx->pc = 0x137A88u;
label_137a88:
    // 0x137a88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137A88u;
    {
        const bool branch_taken_0x137a88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a88) {
            ctx->pc = 0x137A98u;
            goto label_137a98;
        }
    }
    ctx->pc = 0x137A90u;
    // 0x137a90: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x137a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x137a94: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x137a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_137a98:
    // 0x137a98: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x137a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x137a9c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137A9Cu;
    {
        const bool branch_taken_0x137a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A9Cu;
            // 0x137aa0: 0x32030004  andi        $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a9c) {
            ctx->pc = 0x137AB4u;
            goto label_137ab4;
        }
    }
    ctx->pc = 0x137AA4u;
    // 0x137aa4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x137aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137aa8: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137aac: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x137aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x137ab0: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x137ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_137ab4:
    // 0x137ab4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137AB4u;
    {
        const bool branch_taken_0x137ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AB4u;
            // 0x137ab8: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ab4) {
            ctx->pc = 0x137ACCu;
            goto label_137acc;
        }
    }
    ctx->pc = 0x137ABCu;
    // 0x137abc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x137abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x137ac0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137ac4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x137ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x137ac8: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x137ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_137acc:
    // 0x137acc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137ACCu;
    {
        const bool branch_taken_0x137acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137ACCu;
            // 0x137ad0: 0x32030010  andi        $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137acc) {
            ctx->pc = 0x137AE4u;
            goto label_137ae4;
        }
    }
    ctx->pc = 0x137AD4u;
    // 0x137ad4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x137ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x137ad8: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137adc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x137adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x137ae0: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x137ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_137ae4:
    // 0x137ae4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137AE4u;
    {
        const bool branch_taken_0x137ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AE4u;
            // 0x137ae8: 0x32030020  andi        $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ae4) {
            ctx->pc = 0x137AFCu;
            goto label_137afc;
        }
    }
    ctx->pc = 0x137AECu;
    // 0x137aec: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x137aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x137af0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137af4: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x137af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x137af8: 0x32030020  andi        $v1, $s0, 0x20
    ctx->pc = 0x137af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_137afc:
    // 0x137afc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137AFCu;
    {
        const bool branch_taken_0x137afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AFCu;
            // 0x137b00: 0x32030040  andi        $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137afc) {
            ctx->pc = 0x137B14u;
            goto label_137b14;
        }
    }
    ctx->pc = 0x137B04u;
    // 0x137b04: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x137b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x137b08: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137b0c: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x137b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x137b10: 0x32030040  andi        $v1, $s0, 0x40
    ctx->pc = 0x137b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_137b14:
    // 0x137b14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137B14u;
    {
        const bool branch_taken_0x137b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B14u;
            // 0x137b18: 0x32030080  andi        $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b14) {
            ctx->pc = 0x137B2Cu;
            goto label_137b2c;
        }
    }
    ctx->pc = 0x137B1Cu;
    // 0x137b1c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x137b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137b20: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137b24: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x137b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x137b28: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x137b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_137b2c:
    // 0x137b2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137B2Cu;
    {
        const bool branch_taken_0x137b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B2Cu;
            // 0x137b30: 0x32030100  andi        $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b2c) {
            ctx->pc = 0x137B44u;
            goto label_137b44;
        }
    }
    ctx->pc = 0x137B34u;
    // 0x137b34: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x137b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x137b38: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137b3c: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x137b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x137b40: 0x32030100  andi        $v1, $s0, 0x100
    ctx->pc = 0x137b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
label_137b44:
    // 0x137b44: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137B44u;
    {
        const bool branch_taken_0x137b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B44u;
            // 0x137b48: 0x32030200  andi        $v1, $s0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b44) {
            ctx->pc = 0x137B5Cu;
            goto label_137b5c;
        }
    }
    ctx->pc = 0x137B4Cu;
    // 0x137b4c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x137b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x137b50: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137b54: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x137b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x137b58: 0x32030200  andi        $v1, $s0, 0x200
    ctx->pc = 0x137b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
label_137b5c:
    // 0x137b5c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137B5Cu;
    {
        const bool branch_taken_0x137b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B5Cu;
            // 0x137b60: 0x32030400  andi        $v1, $s0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b5c) {
            ctx->pc = 0x137B74u;
            goto label_137b74;
        }
    }
    ctx->pc = 0x137B64u;
    // 0x137b64: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x137b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x137b68: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137b6c: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x137b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x137b70: 0x32030400  andi        $v1, $s0, 0x400
    ctx->pc = 0x137b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
label_137b74:
    // 0x137b74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137B74u;
    {
        const bool branch_taken_0x137b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B74u;
            // 0x137b78: 0x32030800  andi        $v1, $s0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b74) {
            ctx->pc = 0x137B8Cu;
            goto label_137b8c;
        }
    }
    ctx->pc = 0x137B7Cu;
    // 0x137b7c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x137b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x137b80: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137b84: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x137b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x137b88: 0x32030800  andi        $v1, $s0, 0x800
    ctx->pc = 0x137b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_137b8c:
    // 0x137b8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137B8Cu;
    {
        const bool branch_taken_0x137b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B8Cu;
            // 0x137b90: 0x32031000  andi        $v1, $s0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b8c) {
            ctx->pc = 0x137BA4u;
            goto label_137ba4;
        }
    }
    ctx->pc = 0x137B94u;
    // 0x137b94: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x137b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x137b98: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137b9c: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x137b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
    // 0x137ba0: 0x32031000  andi        $v1, $s0, 0x1000
    ctx->pc = 0x137ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
label_137ba4:
    // 0x137ba4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137BA4u;
    {
        const bool branch_taken_0x137ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BA4u;
            // 0x137ba8: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ba4) {
            ctx->pc = 0x137BBCu;
            goto label_137bbc;
        }
    }
    ctx->pc = 0x137BACu;
    // 0x137bac: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x137bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137bb0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137bb4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x137bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x137bb8: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x137bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_137bbc:
    // 0x137bbc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137BBCu;
    {
        const bool branch_taken_0x137bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BBCu;
            // 0x137bc0: 0x32034000  andi        $v1, $s0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bbc) {
            ctx->pc = 0x137BD4u;
            goto label_137bd4;
        }
    }
    ctx->pc = 0x137BC4u;
    // 0x137bc4: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x137bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x137bc8: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137bcc: 0xac65003c  sw          $a1, 0x3C($v1)
    ctx->pc = 0x137bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 5));
    // 0x137bd0: 0x32034000  andi        $v1, $s0, 0x4000
    ctx->pc = 0x137bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
label_137bd4:
    // 0x137bd4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137BD4u;
    {
        const bool branch_taken_0x137bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BD4u;
            // 0x137bd8: 0x32038000  andi        $v1, $s0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bd4) {
            ctx->pc = 0x137BECu;
            goto label_137bec;
        }
    }
    ctx->pc = 0x137BDCu;
    // 0x137bdc: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x137bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x137be0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137be4: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x137be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x137be8: 0x32038000  andi        $v1, $s0, 0x8000
    ctx->pc = 0x137be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
label_137bec:
    // 0x137bec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137BECu;
    {
        const bool branch_taken_0x137bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BECu;
            // 0x137bf0: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bec) {
            ctx->pc = 0x137C04u;
            goto label_137c04;
        }
    }
    ctx->pc = 0x137BF4u;
    // 0x137bf4: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x137bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x137bf8: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137bfc: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x137bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x137c00: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x137c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_137c04:
    // 0x137c04: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x137c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x137c08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137C08u;
    {
        const bool branch_taken_0x137c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C08u;
            // 0x137c0c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c08) {
            ctx->pc = 0x137C20u;
            goto label_137c20;
        }
    }
    ctx->pc = 0x137C10u;
    // 0x137c10: 0x7a250070  lq          $a1, 0x70($s1)
    ctx->pc = 0x137c10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x137c14: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137c18: 0x7c650070  sq          $a1, 0x70($v1)
    ctx->pc = 0x137c18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 5));
    // 0x137c1c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x137c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_137c20:
    // 0x137c20: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x137c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x137c24: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137C24u;
    {
        const bool branch_taken_0x137c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C24u;
            // 0x137c28: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c24) {
            ctx->pc = 0x137C3Cu;
            goto label_137c3c;
        }
    }
    ctx->pc = 0x137C2Cu;
    // 0x137c2c: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x137c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x137c30: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137c34: 0xac650080  sw          $a1, 0x80($v1)
    ctx->pc = 0x137c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 5));
    // 0x137c38: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x137c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_137c3c:
    // 0x137c3c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x137c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x137c40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137C40u;
    {
        const bool branch_taken_0x137c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C40u;
            // 0x137c44: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c40) {
            ctx->pc = 0x137C58u;
            goto label_137c58;
        }
    }
    ctx->pc = 0x137C48u;
    // 0x137c48: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x137c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137c4c: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137c50: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x137c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x137c54: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x137c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_137c58:
    // 0x137c58: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x137c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x137c5c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137C5Cu;
    {
        const bool branch_taken_0x137c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C5Cu;
            // 0x137c60: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c5c) {
            ctx->pc = 0x137C74u;
            goto label_137c74;
        }
    }
    ctx->pc = 0x137C64u;
    // 0x137c64: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x137c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x137c68: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137c6c: 0xac650088  sw          $a1, 0x88($v1)
    ctx->pc = 0x137c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 5));
    // 0x137c70: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x137c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_137c74:
    // 0x137c74: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x137c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x137c78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137C78u;
    {
        const bool branch_taken_0x137c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C78u;
            // 0x137c7c: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c78) {
            ctx->pc = 0x137C90u;
            goto label_137c90;
        }
    }
    ctx->pc = 0x137C80u;
    // 0x137c80: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x137c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x137c84: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137c88: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x137c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x137c8c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x137c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_137c90:
    // 0x137c90: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x137c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x137c94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137C94u;
    {
        const bool branch_taken_0x137c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C94u;
            // 0x137c98: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c94) {
            ctx->pc = 0x137CACu;
            goto label_137cac;
        }
    }
    ctx->pc = 0x137C9Cu;
    // 0x137c9c: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x137c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137ca0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137ca4: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x137ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x137ca8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x137ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_137cac:
    // 0x137cac: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x137cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x137cb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137CB0u;
    {
        const bool branch_taken_0x137cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CB0u;
            // 0x137cb4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cb0) {
            ctx->pc = 0x137CC8u;
            goto label_137cc8;
        }
    }
    ctx->pc = 0x137CB8u;
    // 0x137cb8: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x137cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x137cbc: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137cc0: 0xac65004c  sw          $a1, 0x4C($v1)
    ctx->pc = 0x137cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 5));
    // 0x137cc4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_137cc8:
    // 0x137cc8: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x137cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x137ccc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x137CCCu;
    {
        const bool branch_taken_0x137ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ccc) {
            ctx->pc = 0x137CE0u;
            goto label_137ce0;
        }
    }
    ctx->pc = 0x137CD4u;
    // 0x137cd4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x137cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x137cd8: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137cdc: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x137cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_137ce0:
    // 0x137ce0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x137CE0u;
    {
        const bool branch_taken_0x137ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ce0) {
            ctx->pc = 0x137D18u;
            goto label_137d18;
        }
    }
    ctx->pc = 0x137CE8u;
    // 0x137ce8: 0x8c920058  lw          $s2, 0x58($a0)
    ctx->pc = 0x137ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x137cec: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x137CECu;
    {
        const bool branch_taken_0x137cec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x137cec) {
            ctx->pc = 0x137D14u;
            goto label_137d14;
        }
    }
    ctx->pc = 0x137CF4u;
label_137cf4:
    // 0x137cf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137cf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x137cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137cfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x137cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137d00: 0xc04de54  jal         func_137950
    ctx->pc = 0x137D00u;
    SET_GPR_U32(ctx, 31, 0x137D08u);
    ctx->pc = 0x137D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D00u;
            // 0x137d04: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    goto label_137950;
    ctx->pc = 0x137D08u;
label_137d08:
    // 0x137d08: 0x8e52005c  lw          $s2, 0x5C($s2)
    ctx->pc = 0x137d08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x137d0c: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137D0Cu;
    {
        const bool branch_taken_0x137d0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x137d0c) {
            ctx->pc = 0x137CF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137cf4;
        }
    }
    ctx->pc = 0x137D14u;
label_137d14:
    // 0x137d14: 0x0  nop
    ctx->pc = 0x137d14u;
    // NOP
label_137d18:
    // 0x137d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x137d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137d28: 0x3e00008  jr          $ra
    ctx->pc = 0x137D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D28u;
            // 0x137d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137D30u;
}
