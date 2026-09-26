#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdataRecordBoard__11CMenuInventFv
// Address: 0x201ec0 - 0x201f78
void UpdataRecordBoard__11CMenuInventFv_0x201ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdataRecordBoard__11CMenuInventFv_0x201ec0");
#endif

    switch (ctx->pc) {
        case 0x201ef4u: goto label_201ef4;
        case 0x201f00u: goto label_201f00;
        case 0x201f0cu: goto label_201f0c;
        case 0x201f18u: goto label_201f18;
        case 0x201f24u: goto label_201f24;
        case 0x201f54u: goto label_201f54;
        case 0x201f68u: goto label_201f68;
        default: break;
    }

    ctx->pc = 0x201ec0u;

    // 0x201ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x201ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x201ec4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x201ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x201ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201ed4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x201ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x201ed8: 0x8c30ca5c  lw          $s0, -0x35A4($at)
    ctx->pc = 0x201ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x201edc: 0xae001ad0  sw          $zero, 0x1AD0($s0)
    ctx->pc = 0x201edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6864), GPR_U32(ctx, 0));
    // 0x201ee0: 0xae031acc  sw          $v1, 0x1ACC($s0)
    ctx->pc = 0x201ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6860), GPR_U32(ctx, 3));
    // 0x201ee4: 0xae021ad4  sw          $v0, 0x1AD4($s0)
    ctx->pc = 0x201ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6868), GPR_U32(ctx, 2));
    // 0x201ee8: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x201ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x201eec: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x201EECu;
    SET_GPR_U32(ctx, 31, 0x201EF4u);
    ctx->pc = 0x201EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201EECu;
            // 0x201ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (runtime->hasFunction(0x1FEE00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EF4u; }
        if (ctx->pc != 0x201EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddShutterNum__15CInventUserDataFi_0x1fee00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EF4u; }
        if (ctx->pc != 0x201EF4u) { return; }
    }
    ctx->pc = 0x201EF4u;
label_201ef4:
    // 0x201ef4: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x201ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x201ef8: 0xc07fb48  jal         func_1FED20
    ctx->pc = 0x201EF8u;
    SET_GPR_U32(ctx, 31, 0x201F00u);
    ctx->pc = 0x201EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201EF8u;
            // 0x201efc: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FED20u;
    if (runtime->hasFunction(0x1FED20u)) {
        auto targetFn = runtime->lookupFunction(0x1FED20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F00u; }
        if (ctx->pc != 0x201F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountNeta__15CInventUserDataFv_0x1fed20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F00u; }
        if (ctx->pc != 0x201F00u) { return; }
    }
    ctx->pc = 0x201F00u;
label_201f00:
    // 0x201f00: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x201f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x201f04: 0xc07fb64  jal         func_1FED90
    ctx->pc = 0x201F04u;
    SET_GPR_U32(ctx, 31, 0x201F0Cu);
    ctx->pc = 0x201F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201F04u;
            // 0x201f08: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FED90u;
    if (runtime->hasFunction(0x1FED90u)) {
        auto targetFn = runtime->lookupFunction(0x1FED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F0Cu; }
        if (ctx->pc != 0x201F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountScoop__15CInventUserDataFv_0x1fed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F0Cu; }
        if (ctx->pc != 0x201F0Cu) { return; }
    }
    ctx->pc = 0x201F0Cu;
label_201f0c:
    // 0x201f0c: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x201f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x201f10: 0xc07fc18  jal         func_1FF060
    ctx->pc = 0x201F10u;
    SET_GPR_U32(ctx, 31, 0x201F18u);
    ctx->pc = 0x201F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201F10u;
            // 0x201f14: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF060u;
    if (runtime->hasFunction(0x1FF060u)) {
        auto targetFn = runtime->lookupFunction(0x1FF060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F18u; }
        if (ctx->pc != 0x201F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLevel__15CInventUserDataFv_0x1ff060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F18u; }
        if (ctx->pc != 0x201F18u) { return; }
    }
    ctx->pc = 0x201F18u;
label_201f18:
    // 0x201f18: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x201f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x201f1c: 0xc07fbb0  jal         func_1FEEC0
    ctx->pc = 0x201F1Cu;
    SET_GPR_U32(ctx, 31, 0x201F24u);
    ctx->pc = 0x201F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201F1Cu;
            // 0x201f20: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC0u;
    if (runtime->hasFunction(0x1FEEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F24u; }
        if (ctx->pc != 0x201F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPhotoExp__15CInventUserDataFv_0x1feec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F24u; }
        if (ctx->pc != 0x201F24u) { return; }
    }
    ctx->pc = 0x201F24u;
label_201f24:
    // 0x201f24: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x201f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x201f28: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x201f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x201f2c: 0x2463ee50  addiu       $v1, $v1, -0x11B0
    ctx->pc = 0x201f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962768));
    // 0x201f30: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x201f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x201f34: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x201f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201f38: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x201f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x201f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201f44: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x201f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x201f48: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x201f48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x201f4c: 0xc087798  jal         func_21DE60
    ctx->pc = 0x201F4Cu;
    SET_GPR_U32(ctx, 31, 0x201F54u);
    ctx->pc = 0x201F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201F4Cu;
            // 0x201f50: 0xe4c00010  swc1        $f0, 0x10($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DE60u;
    if (runtime->hasFunction(0x21DE60u)) {
        auto targetFn = runtime->lookupFunction(0x21DE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F54u; }
        if (ctx->pc != 0x201F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPiPii_0x21de60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F54u; }
        if (ctx->pc != 0x201F54u) { return; }
    }
    ctx->pc = 0x201F54u;
label_201f54:
    // 0x201f54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f5c: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x201f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x201f60: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x201F60u;
    SET_GPR_U32(ctx, 31, 0x201F68u);
    ctx->pc = 0x201F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201F60u;
            // 0x201f64: 0x240502bc  addiu       $a1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F68u; }
        if (ctx->pc != 0x201F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F68u; }
        if (ctx->pc != 0x201F68u) { return; }
    }
    ctx->pc = 0x201F68u;
label_201f68:
    // 0x201f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201f70: 0x3e00008  jr          $ra
    ctx->pc = 0x201F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F70u;
            // 0x201f74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201F78u;
}
