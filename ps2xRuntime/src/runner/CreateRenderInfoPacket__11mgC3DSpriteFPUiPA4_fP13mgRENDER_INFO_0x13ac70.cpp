#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateRenderInfoPacket__11mgC3DSpriteFPUiPA4_fP13mgRENDER_INFO
// Address: 0x13ac70 - 0x13b070
void CreateRenderInfoPacket__11mgC3DSpriteFPUiPA4_fP13mgRENDER_INFO_0x13ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateRenderInfoPacket__11mgC3DSpriteFPUiPA4_fP13mgRENDER_INFO_0x13ac70");
#endif

    switch (ctx->pc) {
        case 0x13acd0u: goto label_13acd0;
        case 0x13acd8u: goto label_13acd8;
        case 0x13ace8u: goto label_13ace8;
        case 0x13ad60u: goto label_13ad60;
        case 0x13ad6cu: goto label_13ad6c;
        case 0x13ad9cu: goto label_13ad9c;
        case 0x13ada8u: goto label_13ada8;
        case 0x13adb4u: goto label_13adb4;
        case 0x13adecu: goto label_13adec;
        case 0x13adfcu: goto label_13adfc;
        case 0x13ae0cu: goto label_13ae0c;
        case 0x13b038u: goto label_13b038;
        default: break;
    }

    ctx->pc = 0x13ac70u;

    // 0x13ac70: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x13ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x13ac74: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13ac78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x13ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x13ac7c: 0x24420e60  addiu       $v0, $v0, 0xE60
    ctx->pc = 0x13ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3680));
    // 0x13ac80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13ac84: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x13ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13ac88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13ac8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13ac90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13ac94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13ac98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13ac98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13aca0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13aca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aca4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13aca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13aca8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13aca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13acac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13acacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13acb0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x13acb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13acb4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13acb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13acb8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13acbc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13acbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13acc0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x13acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13acc4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13acc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13acc8: 0xc04c094  jal         func_130250
    ctx->pc = 0x13ACC8u;
    SET_GPR_U32(ctx, 31, 0x13ACD0u);
    ctx->pc = 0x13ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ACC8u;
            // 0x13accc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACD0u; }
        if (ctx->pc != 0x13ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACD0u; }
        if (ctx->pc != 0x13ACD0u) { return; }
    }
    ctx->pc = 0x13ACD0u;
label_13acd0:
    // 0x13acd0: 0xc04f8ec  jal         func_13E3B0
    ctx->pc = 0x13ACD0u;
    SET_GPR_U32(ctx, 31, 0x13ACD8u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACD8u; }
        if (ctx->pc != 0x13ACD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACD8u; }
        if (ctx->pc != 0x13ACD8u) { return; }
    }
    ctx->pc = 0x13ACD8u;
label_13acd8:
    // 0x13acd8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13acd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13acdc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13acdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ace0: 0xc04e494  jal         func_139250
    ctx->pc = 0x13ACE0u;
    SET_GPR_U32(ctx, 31, 0x13ACE8u);
    ctx->pc = 0x13ACE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ACE0u;
            // 0x13ace4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACE8u; }
        if (ctx->pc != 0x13ACE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACE8u; }
        if (ctx->pc != 0x13ACE8u) { return; }
    }
    ctx->pc = 0x13ACE8u;
label_13ace8:
    // 0x13ace8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13acec: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x13acecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x13acf0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x13acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x13acf4: 0x3445003c  ori         $a1, $v0, 0x3C
    ctx->pc = 0x13acf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    // 0x13acf8: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x13acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x13acfc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x13acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x13ad00: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x13ad00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x13ad04: 0x344200b4  ori         $v0, $v0, 0xB4
    ctx->pc = 0x13ad04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)180);
    // 0x13ad08: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x13ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x13ad0c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x13ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13ad10: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x13ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x13ad14: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x13ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x13ad18: 0xaea50014  sw          $a1, 0x14($s5)
    ctx->pc = 0x13ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 5));
    // 0x13ad1c: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x13ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x13ad20: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13ad24: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13ad24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ad28: 0x7ea20020  sq          $v0, 0x20($s5)
    ctx->pc = 0x13ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
    // 0x13ad2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13ad2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ad30: 0x7ea20030  sq          $v0, 0x30($s5)
    ctx->pc = 0x13ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), GPR_VEC(ctx, 2));
    // 0x13ad34: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13ad34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ad38: 0x7ea20040  sq          $v0, 0x40($s5)
    ctx->pc = 0x13ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 2));
    // 0x13ad3c: 0x8e020fbc  lw          $v0, 0xFBC($s0)
    ctx->pc = 0x13ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4028)));
    // 0x13ad40: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x13ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
    // 0x13ad44: 0xc6000fb0  lwc1        $f0, 0xFB0($s0)
    ctx->pc = 0x13ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad48: 0xe6a00054  swc1        $f0, 0x54($s5)
    ctx->pc = 0x13ad48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x13ad4c: 0xc6000fb4  lwc1        $f0, 0xFB4($s0)
    ctx->pc = 0x13ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad50: 0xe6a00058  swc1        $f0, 0x58($s5)
    ctx->pc = 0x13ad50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x13ad54: 0xc6000fb8  lwc1        $f0, 0xFB8($s0)
    ctx->pc = 0x13ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad58: 0xc041c60  jal         func_107180
    ctx->pc = 0x13AD58u;
    SET_GPR_U32(ctx, 31, 0x13AD60u);
    ctx->pc = 0x13AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD58u;
            // 0x13ad5c: 0xe6a0005c  swc1        $f0, 0x5C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD60u; }
        if (ctx->pc != 0x13AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD60u; }
        if (ctx->pc != 0x13AD60u) { return; }
    }
    ctx->pc = 0x13AD60u;
label_13ad60:
    // 0x13ad60: 0x26a400a0  addiu       $a0, $s5, 0xA0
    ctx->pc = 0x13ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x13ad64: 0xc041c60  jal         func_107180
    ctx->pc = 0x13AD64u;
    SET_GPR_U32(ctx, 31, 0x13AD6Cu);
    ctx->pc = 0x13AD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD64u;
            // 0x13ad68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD6Cu; }
        if (ctx->pc != 0x13AD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD6Cu; }
        if (ctx->pc != 0x13AD6Cu) { return; }
    }
    ctx->pc = 0x13AD6Cu;
label_13ad6c:
    // 0x13ad6c: 0xae000fc4  sw          $zero, 0xFC4($s0)
    ctx->pc = 0x13ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4036), GPR_U32(ctx, 0));
    // 0x13ad70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad74: 0xc6000fdc  lwc1        $f0, 0xFDC($s0)
    ctx->pc = 0x13ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad78: 0x26b601a0  addiu       $s6, $s5, 0x1A0
    ctx->pc = 0x13ad78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 416));
    // 0x13ad7c: 0xe6a00190  swc1        $f0, 0x190($s5)
    ctx->pc = 0x13ad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
    // 0x13ad80: 0xc6000fe4  lwc1        $f0, 0xFE4($s0)
    ctx->pc = 0x13ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad84: 0xe6a00194  swc1        $f0, 0x194($s5)
    ctx->pc = 0x13ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 404), bits); }
    // 0x13ad88: 0xc6000fe0  lwc1        $f0, 0xFE0($s0)
    ctx->pc = 0x13ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad8c: 0xe6a00198  swc1        $f0, 0x198($s5)
    ctx->pc = 0x13ad8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 408), bits); }
    // 0x13ad90: 0xc6000fe8  lwc1        $f0, 0xFE8($s0)
    ctx->pc = 0x13ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad94: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x13AD94u;
    SET_GPR_U32(ctx, 31, 0x13AD9Cu);
    ctx->pc = 0x13AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AD94u;
            // 0x13ad98: 0xe6a0019c  swc1        $f0, 0x19C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 412), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD9Cu; }
        if (ctx->pc != 0x13AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD9Cu; }
        if (ctx->pc != 0x13AD9Cu) { return; }
    }
    ctx->pc = 0x13AD9Cu;
label_13ad9c:
    // 0x13ad9c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13ad9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x13ada0: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x13ADA0u;
    SET_GPR_U32(ctx, 31, 0x13ADA8u);
    ctx->pc = 0x13ADA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADA0u;
            // 0x13ada4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADA8u; }
        if (ctx->pc != 0x13ADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADA8u; }
        if (ctx->pc != 0x13ADA8u) { return; }
    }
    ctx->pc = 0x13ADA8u;
label_13ada8:
    // 0x13ada8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x13ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13adac: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x13ADACu;
    SET_GPR_U32(ctx, 31, 0x13ADB4u);
    ctx->pc = 0x13ADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADACu;
            // 0x13adb0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADB4u; }
        if (ctx->pc != 0x13ADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADB4u; }
        if (ctx->pc != 0x13ADB4u) { return; }
    }
    ctx->pc = 0x13ADB4u;
label_13adb4:
    // 0x13adb4: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x13adb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x13adb8: 0x26d10010  addiu       $s1, $s6, 0x10
    ctx->pc = 0x13adb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x13adbc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x13adbcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x13adc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13adc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13adc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13adc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13adc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13adcc: 0x7ec20010  sq          $v0, 0x10($s6)
    ctx->pc = 0x13adccu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), GPR_VEC(ctx, 2));
    // 0x13add0: 0x7a020060  lq          $v0, 0x60($s0)
    ctx->pc = 0x13add0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13add4: 0x7ec20020  sq          $v0, 0x20($s6)
    ctx->pc = 0x13add4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), GPR_VEC(ctx, 2));
    // 0x13add8: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x13add8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x13addc: 0x7ec20030  sq          $v0, 0x30($s6)
    ctx->pc = 0x13addcu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), GPR_VEC(ctx, 2));
    // 0x13ade0: 0x7a020080  lq          $v0, 0x80($s0)
    ctx->pc = 0x13ade0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x13ade4: 0xc041e96  jal         func_107A58
    ctx->pc = 0x13ADE4u;
    SET_GPR_U32(ctx, 31, 0x13ADECu);
    ctx->pc = 0x13ADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADE4u;
            // 0x13ade8: 0x7ec20040  sq          $v0, 0x40($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADECu; }
        if (ctx->pc != 0x13ADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADECu; }
        if (ctx->pc != 0x13ADECu) { return; }
    }
    ctx->pc = 0x13ADECu;
label_13adec:
    // 0x13adec: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13adf0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x13adf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x13adf4: 0xc041e96  jal         func_107A58
    ctx->pc = 0x13ADF4u;
    SET_GPR_U32(ctx, 31, 0x13ADFCu);
    ctx->pc = 0x13ADF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ADF4u;
            // 0x13adf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADFCu; }
        if (ctx->pc != 0x13ADFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADFCu; }
        if (ctx->pc != 0x13ADFCu) { return; }
    }
    ctx->pc = 0x13ADFCu;
label_13adfc:
    // 0x13adfc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x13adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13ae00: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x13ae00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x13ae04: 0xc041e96  jal         func_107A58
    ctx->pc = 0x13AE04u;
    SET_GPR_U32(ctx, 31, 0x13AE0Cu);
    ctx->pc = 0x13AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE04u;
            // 0x13ae08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AE0Cu; }
        if (ctx->pc != 0x13AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AE0Cu; }
        if (ctx->pc != 0x13AE0Cu) { return; }
    }
    ctx->pc = 0x13AE0Cu;
label_13ae0c:
    // 0x13ae0c: 0x26c30050  addiu       $v1, $s6, 0x50
    ctx->pc = 0x13ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x13ae10: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x13ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13ae14: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ae18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AE18u;
    {
        const bool branch_taken_0x13ae18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13AE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE18u;
            // 0x13ae1c: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae18) {
            ctx->pc = 0x13AE28u;
            goto label_13ae28;
        }
    }
    ctx->pc = 0x13AE20u;
    // 0x13ae20: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13ae24: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13ae24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13ae28:
    // 0x13ae28: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x13ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x13ae2c: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x13ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x13ae30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13ae34: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x13ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x13ae38: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x13ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x13ae3c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x13ae3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x13ae40: 0x26c30060  addiu       $v1, $s6, 0x60
    ctx->pc = 0x13ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x13ae44: 0xaea5001c  sw          $a1, 0x1C($s5)
    ctx->pc = 0x13ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 5));
    // 0x13ae48: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x13ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13ae4c: 0xaec00050  sw          $zero, 0x50($s6)
    ctx->pc = 0x13ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 80), GPR_U32(ctx, 0));
    // 0x13ae50: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ae54: 0xaec00054  sw          $zero, 0x54($s6)
    ctx->pc = 0x13ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 0));
    // 0x13ae58: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13ae58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13ae5c: 0xaec00058  sw          $zero, 0x58($s6)
    ctx->pc = 0x13ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 0));
    // 0x13ae60: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AE60u;
    {
        const bool branch_taken_0x13ae60 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13AE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE60u;
            // 0x13ae64: 0xaec4005c  sw          $a0, 0x5C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae60) {
            ctx->pc = 0x13AE70u;
            goto label_13ae70;
        }
    }
    ctx->pc = 0x13AE68u;
    // 0x13ae68: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13ae6c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13ae6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13ae70:
    // 0x13ae70: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AE70u;
    {
        const bool branch_taken_0x13ae70 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13AE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE70u;
            // 0x13ae74: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae70) {
            ctx->pc = 0x13AE80u;
            goto label_13ae80;
        }
    }
    ctx->pc = 0x13AE78u;
    // 0x13ae78: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x13ae7c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13ae7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_13ae80:
    // 0x13ae80: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ae84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ae88: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x13ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x13ae8c: 0x8e030fc4  lw          $v1, 0xFC4($s0)
    ctx->pc = 0x13ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4036)));
    // 0x13ae90: 0x8e020fc0  lw          $v0, 0xFC0($s0)
    ctx->pc = 0x13ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4032)));
    // 0x13ae94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ae94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ae98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AE98u;
    {
        const bool branch_taken_0x13ae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AE98u;
            // 0x13ae9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae98) {
            ctx->pc = 0x13AEA4u;
            goto label_13aea4;
        }
    }
    ctx->pc = 0x13AEA0u;
    // 0x13aea0: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x13aea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_13aea4:
    // 0x13aea4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AEA4u;
    {
        const bool branch_taken_0x13aea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aea4) {
            ctx->pc = 0x13AEB0u;
            goto label_13aeb0;
        }
    }
    ctx->pc = 0x13AEACu;
    // 0x13aeac: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x13aeacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
label_13aeb0:
    // 0x13aeb0: 0x8e030fcc  lw          $v1, 0xFCC($s0)
    ctx->pc = 0x13aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4044)));
    // 0x13aeb4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x13aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x13aeb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AEB8u;
    {
        const bool branch_taken_0x13aeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aeb8) {
            ctx->pc = 0x13AEC4u;
            goto label_13aec4;
        }
    }
    ctx->pc = 0x13AEC0u;
    // 0x13aec0: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x13aec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_13aec4:
    // 0x13aec4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13aec8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AEC8u;
    {
        const bool branch_taken_0x13aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aec8) {
            ctx->pc = 0x13AED4u;
            goto label_13aed4;
        }
    }
    ctx->pc = 0x13AED0u;
    // 0x13aed0: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x13aed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
label_13aed4:
    // 0x13aed4: 0x8e020fc8  lw          $v0, 0xFC8($s0)
    ctx->pc = 0x13aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4040)));
    // 0x13aed8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AED8u;
    {
        const bool branch_taken_0x13aed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aed8) {
            ctx->pc = 0x13AEE4u;
            goto label_13aee4;
        }
    }
    ctx->pc = 0x13AEE0u;
    // 0x13aee0: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x13aee0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
label_13aee4:
    // 0x13aee4: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x13aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x13aee8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AEE8u;
    {
        const bool branch_taken_0x13aee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AEE8u;
            // 0x13aeec: 0x3c026c01  lui         $v0, 0x6C01 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aee8) {
            ctx->pc = 0x13AEF4u;
            goto label_13aef4;
        }
    }
    ctx->pc = 0x13AEF0u;
    // 0x13aef0: 0x34e70020  ori         $a3, $a3, 0x20
    ctx->pc = 0x13aef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
label_13aef4:
    // 0x13aef4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x13aef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x13aef8: 0x34430026  ori         $v1, $v0, 0x26
    ctx->pc = 0x13aef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
    // 0x13aefc: 0x34048003  ori         $a0, $zero, 0x8003
    ctx->pc = 0x13aefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x13af00: 0x34c20006  ori         $v0, $a2, 0x6
    ctx->pc = 0x13af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x13af04: 0xaec20060  sw          $v0, 0x60($s6)
    ctx->pc = 0x13af04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 2));
    // 0x13af08: 0xaec00064  sw          $zero, 0x64($s6)
    ctx->pc = 0x13af08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 0));
    // 0x13af0c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13af10: 0xaec00068  sw          $zero, 0x68($s6)
    ctx->pc = 0x13af10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 0));
    // 0x13af14: 0x34450004  ori         $a1, $v0, 0x4
    ctx->pc = 0x13af14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13af18: 0xaec3006c  sw          $v1, 0x6C($s6)
    ctx->pc = 0x13af18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 3));
    // 0x13af1c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x13af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x13af20: 0xaec70070  sw          $a3, 0x70($s6)
    ctx->pc = 0x13af20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 7));
    // 0x13af24: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x13af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13af28: 0xaec00074  sw          $zero, 0x74($s6)
    ctx->pc = 0x13af28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 116), GPR_U32(ctx, 0));
    // 0x13af2c: 0xaec00078  sw          $zero, 0x78($s6)
    ctx->pc = 0x13af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 120), GPR_U32(ctx, 0));
    // 0x13af30: 0xaec0007c  sw          $zero, 0x7C($s6)
    ctx->pc = 0x13af30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 124), GPR_U32(ctx, 0));
    // 0x13af34: 0xaec00080  sw          $zero, 0x80($s6)
    ctx->pc = 0x13af34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 0));
    // 0x13af38: 0xaec00084  sw          $zero, 0x84($s6)
    ctx->pc = 0x13af38u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 132), GPR_U32(ctx, 0));
    // 0x13af3c: 0xaec00088  sw          $zero, 0x88($s6)
    ctx->pc = 0x13af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 136), GPR_U32(ctx, 0));
    // 0x13af40: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x13af40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x13af44: 0xaec40090  sw          $a0, 0x90($s6)
    ctx->pc = 0x13af44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 4));
    // 0x13af48: 0xaec60094  sw          $a2, 0x94($s6)
    ctx->pc = 0x13af48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 6));
    // 0x13af4c: 0xaec30098  sw          $v1, 0x98($s6)
    ctx->pc = 0x13af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
    // 0x13af50: 0xaec0009c  sw          $zero, 0x9C($s6)
    ctx->pc = 0x13af50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 156), GPR_U32(ctx, 0));
    // 0x13af54: 0xaec000a0  sw          $zero, 0xA0($s6)
    ctx->pc = 0x13af54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 160), GPR_U32(ctx, 0));
    // 0x13af58: 0xaec000a4  sw          $zero, 0xA4($s6)
    ctx->pc = 0x13af58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 164), GPR_U32(ctx, 0));
    // 0x13af5c: 0xaec200a8  sw          $v0, 0xA8($s6)
    ctx->pc = 0x13af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
    // 0x13af60: 0xaec000ac  sw          $zero, 0xAC($s6)
    ctx->pc = 0x13af60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 172), GPR_U32(ctx, 0));
    // 0x13af64: 0x8e020fcc  lw          $v0, 0xFCC($s0)
    ctx->pc = 0x13af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4044)));
    // 0x13af68: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x13af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13af6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13af6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13af70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AF70u;
    {
        const bool branch_taken_0x13af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AF70u;
            // 0x13af74: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af70) {
            ctx->pc = 0x13AF84u;
            goto label_13af84;
        }
    }
    ctx->pc = 0x13AF78u;
    // 0x13af78: 0x8e020fa4  lw          $v0, 0xFA4($s0)
    ctx->pc = 0x13af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4004)));
    // 0x13af7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13af7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13af80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13af80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13af84:
    // 0x13af84: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x13af84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13af88: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x13af88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x13af8c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13af90: 0x34630158  ori         $v1, $v1, 0x158
    ctx->pc = 0x13af90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)344);
    // 0x13af94: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x13af94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x13af98: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x13af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x13af9c: 0xaec300b0  sw          $v1, 0xB0($s6)
    ctx->pc = 0x13af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 176), GPR_U32(ctx, 3));
    // 0x13afa0: 0xaec000b4  sw          $zero, 0xB4($s6)
    ctx->pc = 0x13afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 0));
    // 0x13afa4: 0xaec200b8  sw          $v0, 0xB8($s6)
    ctx->pc = 0x13afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 184), GPR_U32(ctx, 2));
    // 0x13afa8: 0xaec000bc  sw          $zero, 0xBC($s6)
    ctx->pc = 0x13afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 188), GPR_U32(ctx, 0));
    // 0x13afac: 0x8e020fcc  lw          $v0, 0xFCC($s0)
    ctx->pc = 0x13afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4044)));
    // 0x13afb0: 0x92040fd9  lbu         $a0, 0xFD9($s0)
    ctx->pc = 0x13afb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4057)));
    // 0x13afb4: 0x92030fda  lbu         $v1, 0xFDA($s0)
    ctx->pc = 0x13afb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4058)));
    // 0x13afb8: 0x92050fd8  lbu         $a1, 0xFD8($s0)
    ctx->pc = 0x13afb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4056)));
    // 0x13afbc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x13afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13afc0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x13afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x13afc4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x13afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x13afc8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x13afc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13afcc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x13afccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13afd0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AFD0u;
    {
        const bool branch_taken_0x13afd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13AFD0u;
            // 0x13afd4: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afd0) {
            ctx->pc = 0x13AFDCu;
            goto label_13afdc;
        }
    }
    ctx->pc = 0x13AFD8u;
    // 0x13afd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13afd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13afdc:
    // 0x13afdc: 0xaec400c0  sw          $a0, 0xC0($s6)
    ctx->pc = 0x13afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 4));
    // 0x13afe0: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x13afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x13afe4: 0xaec000c4  sw          $zero, 0xC4($s6)
    ctx->pc = 0x13afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 0));
    // 0x13afe8: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x13afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x13afec: 0xaec200c8  sw          $v0, 0xC8($s6)
    ctx->pc = 0x13afecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 200), GPR_U32(ctx, 2));
    // 0x13aff0: 0xaec000cc  sw          $zero, 0xCC($s6)
    ctx->pc = 0x13aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 0));
    // 0x13aff4: 0x26c200e0  addiu       $v0, $s6, 0xE0
    ctx->pc = 0x13aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x13aff8: 0xaec400d0  sw          $a0, 0xD0($s6)
    ctx->pc = 0x13aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 208), GPR_U32(ctx, 4));
    // 0x13affc: 0x541823  subu        $v1, $v0, $s4
    ctx->pc = 0x13affcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13b000: 0xaec000d4  sw          $zero, 0xD4($s6)
    ctx->pc = 0x13b000u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 212), GPR_U32(ctx, 0));
    // 0x13b004: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13b008: 0xaec000d8  sw          $zero, 0xD8($s6)
    ctx->pc = 0x13b008u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 216), GPR_U32(ctx, 0));
    // 0x13b00c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B00Cu;
    {
        const bool branch_taken_0x13b00c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13B010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B00Cu;
            // 0x13b010: 0xaec000dc  sw          $zero, 0xDC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b00c) {
            ctx->pc = 0x13B01Cu;
            goto label_13b01c;
        }
    }
    ctx->pc = 0x13B014u;
    // 0x13b014: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13b018: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13b018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13b01c:
    // 0x13b01c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B01Cu;
    {
        const bool branch_taken_0x13b01c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13B020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B01Cu;
            // 0x13b020: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b01c) {
            ctx->pc = 0x13B02Cu;
            goto label_13b02c;
        }
    }
    ctx->pc = 0x13B024u;
    // 0x13b024: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x13b028: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x13b028u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_13b02c:
    // 0x13b02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b030: 0xc04f8f4  jal         func_13E3D0
    ctx->pc = 0x13B030u;
    SET_GPR_U32(ctx, 31, 0x13B038u);
    ctx->pc = 0x13B034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B030u;
            // 0x13b034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B038u; }
        if (ctx->pc != 0x13B038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B038u; }
        if (ctx->pc != 0x13B038u) { return; }
    }
    ctx->pc = 0x13B038u;
label_13b038:
    // 0x13b038: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b03c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x13b03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b040: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13b040u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b044: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x13b044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13b048: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13b048u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b04c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b050: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13b050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b054: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b058: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13b058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b05c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13b05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13b060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b068: 0x3e00008  jr          $ra
    ctx->pc = 0x13B068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B068u;
            // 0x13b06c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B070u;
}
