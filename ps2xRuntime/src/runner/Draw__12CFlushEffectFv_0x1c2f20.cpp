#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CFlushEffectFv
// Address: 0x1c2f20 - 0x1c3124
void Draw__12CFlushEffectFv_0x1c2f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CFlushEffectFv_0x1c2f20");
#endif

    switch (ctx->pc) {
        case 0x1c2f40u: goto label_1c2f40;
        case 0x1c2f50u: goto label_1c2f50;
        case 0x1c2f58u: goto label_1c2f58;
        case 0x1c2f64u: goto label_1c2f64;
        case 0x1c2f70u: goto label_1c2f70;
        case 0x1c2f7cu: goto label_1c2f7c;
        case 0x1c2f88u: goto label_1c2f88;
        case 0x1c2f94u: goto label_1c2f94;
        case 0x1c2fa0u: goto label_1c2fa0;
        case 0x1c2facu: goto label_1c2fac;
        case 0x1c2fb8u: goto label_1c2fb8;
        case 0x1c2fd4u: goto label_1c2fd4;
        case 0x1c3034u: goto label_1c3034;
        case 0x1c3044u: goto label_1c3044;
        case 0x1c3050u: goto label_1c3050;
        case 0x1c3068u: goto label_1c3068;
        case 0x1c3074u: goto label_1c3074;
        case 0x1c308cu: goto label_1c308c;
        case 0x1c3098u: goto label_1c3098;
        case 0x1c30b0u: goto label_1c30b0;
        case 0x1c30bcu: goto label_1c30bc;
        case 0x1c30d4u: goto label_1c30d4;
        case 0x1c30e0u: goto label_1c30e0;
        case 0x1c30fcu: goto label_1c30fc;
        case 0x1c3108u: goto label_1c3108;
        case 0x1c3114u: goto label_1c3114;
        default: break;
    }

    ctx->pc = 0x1c2f20u;

    // 0x1c2f20: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c2f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1c2f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2f2c: 0x84830030  lh          $v1, 0x30($a0)
    ctx->pc = 0x1c2f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c2f30: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x1C2F30u;
    {
        const bool branch_taken_0x1c2f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F30u;
            // 0x1c2f34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f30) {
            ctx->pc = 0x1C3114u;
            goto label_1c3114;
        }
    }
    ctx->pc = 0x1C2F38u;
    // 0x1c2f38: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C2F38u;
    SET_GPR_U32(ctx, 31, 0x1C2F40u);
    ctx->pc = 0x1C2F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F38u;
            // 0x1c2f3c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F40u; }
        if (ctx->pc != 0x1C2F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F40u; }
        if (ctx->pc != 0x1C2F40u) { return; }
    }
    ctx->pc = 0x1C2F40u;
label_1c2f40:
    // 0x1c2f40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f48: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C2F48u;
    SET_GPR_U32(ctx, 31, 0x1C2F50u);
    ctx->pc = 0x1C2F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F48u;
            // 0x1c2f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F50u; }
        if (ctx->pc != 0x1C2F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F50u; }
        if (ctx->pc != 0x1C2F50u) { return; }
    }
    ctx->pc = 0x1C2F50u;
label_1c2f50:
    // 0x1c2f50: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C2F50u;
    SET_GPR_U32(ctx, 31, 0x1C2F58u);
    ctx->pc = 0x1C2F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F50u;
            // 0x1c2f54: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F58u; }
        if (ctx->pc != 0x1C2F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F58u; }
        if (ctx->pc != 0x1C2F58u) { return; }
    }
    ctx->pc = 0x1C2F58u;
label_1c2f58:
    // 0x1c2f58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2f5c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F64u);
    ctx->pc = 0x1C2F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F5Cu;
            // 0x1c2f60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F64u; }
        if (ctx->pc != 0x1C2F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F64u; }
        if (ctx->pc != 0x1C2F64u) { return; }
    }
    ctx->pc = 0x1C2F64u;
label_1c2f64:
    // 0x1c2f64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2f68: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C2F68u;
    SET_GPR_U32(ctx, 31, 0x1C2F70u);
    ctx->pc = 0x1C2F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F68u;
            // 0x1c2f6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F70u; }
        if (ctx->pc != 0x1C2F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F70u; }
        if (ctx->pc != 0x1C2F70u) { return; }
    }
    ctx->pc = 0x1C2F70u;
label_1c2f70:
    // 0x1c2f70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2f74: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C2F74u;
    SET_GPR_U32(ctx, 31, 0x1C2F7Cu);
    ctx->pc = 0x1C2F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F74u;
            // 0x1c2f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F7Cu; }
        if (ctx->pc != 0x1C2F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F7Cu; }
        if (ctx->pc != 0x1C2F7Cu) { return; }
    }
    ctx->pc = 0x1C2F7Cu;
label_1c2f7c:
    // 0x1c2f7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2f80: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C2F80u;
    SET_GPR_U32(ctx, 31, 0x1C2F88u);
    ctx->pc = 0x1C2F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F80u;
            // 0x1c2f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F88u; }
        if (ctx->pc != 0x1C2F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F88u; }
        if (ctx->pc != 0x1C2F88u) { return; }
    }
    ctx->pc = 0x1C2F88u;
label_1c2f88:
    // 0x1c2f88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2f8c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C2F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F94u);
    ctx->pc = 0x1C2F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F8Cu;
            // 0x1c2f90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F94u; }
        if (ctx->pc != 0x1C2F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F94u; }
        if (ctx->pc != 0x1C2F94u) { return; }
    }
    ctx->pc = 0x1C2F94u;
label_1c2f94:
    // 0x1c2f94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2f98: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C2F98u;
    SET_GPR_U32(ctx, 31, 0x1C2FA0u);
    ctx->pc = 0x1C2F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F98u;
            // 0x1c2f9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FA0u; }
        if (ctx->pc != 0x1C2FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FA0u; }
        if (ctx->pc != 0x1C2FA0u) { return; }
    }
    ctx->pc = 0x1C2FA0u;
label_1c2fa0:
    // 0x1c2fa0: 0x8f858e94  lw          $a1, -0x716C($gp)
    ctx->pc = 0x1c2fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
    // 0x1c2fa4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C2FA4u;
    SET_GPR_U32(ctx, 31, 0x1C2FACu);
    ctx->pc = 0x1C2FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FA4u;
            // 0x1c2fa8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FACu; }
        if (ctx->pc != 0x1C2FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FACu; }
        if (ctx->pc != 0x1C2FACu) { return; }
    }
    ctx->pc = 0x1C2FACu;
label_1c2fac:
    // 0x1c2fac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2fb0: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1C2FB0u;
    SET_GPR_U32(ctx, 31, 0x1C2FB8u);
    ctx->pc = 0x1C2FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FB0u;
            // 0x1c2fb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FB8u; }
        if (ctx->pc != 0x1C2FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FB8u; }
        if (ctx->pc != 0x1C2FB8u) { return; }
    }
    ctx->pc = 0x1C2FB8u;
label_1c2fb8:
    // 0x1c2fb8: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x1c2fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2fbc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c2fc0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1c2fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1c2fc4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1c2fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c2fc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fcc: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C2FCCu;
    SET_GPR_U32(ctx, 31, 0x1C2FD4u);
    ctx->pc = 0x1C2FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FCCu;
            // 0x1c2fd0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FD4u; }
        if (ctx->pc != 0x1C2FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FD4u; }
        if (ctx->pc != 0x1C2FD4u) { return; }
    }
    ctx->pc = 0x1C2FD4u;
label_1c2fd4:
    // 0x1c2fd4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1C2FD4u;
    {
        const bool branch_taken_0x1c2fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FD4u;
            // 0x1c2fd8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fd4) {
            ctx->pc = 0x1C310Cu;
            goto label_1c310c;
        }
    }
    ctx->pc = 0x1C2FDCu;
    // 0x1c2fdc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1c2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c2fe0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c2fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c2fe4: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x1c2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1c2fe8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2fec: 0x8fab0170  lw          $t3, 0x170($sp)
    ctx->pc = 0x1c2fecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c2ff0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c2ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ff4: 0x8faa0144  lw          $t2, 0x144($sp)
    ctx->pc = 0x1c2ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1c2ff8: 0x8fa90148  lw          $t1, 0x148($sp)
    ctx->pc = 0x1c2ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1c2ffc: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x1c2ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1c3000: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x1c3000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x1c3004: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x1c3004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x1c3008: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1c3008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1c300c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x1c300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x1c3010: 0xafab0150  sw          $t3, 0x150($sp)
    ctx->pc = 0x1c3010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 11));
    // 0x1c3014: 0xafaa0154  sw          $t2, 0x154($sp)
    ctx->pc = 0x1c3014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 10));
    // 0x1c3018: 0xafa90158  sw          $t1, 0x158($sp)
    ctx->pc = 0x1c3018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 9));
    // 0x1c301c: 0xafa8015c  sw          $t0, 0x15C($sp)
    ctx->pc = 0x1c301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 8));
    // 0x1c3020: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x1c3020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x1c3024: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x1c3024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x1c3028: 0x86080024  lh          $t0, 0x24($s0)
    ctx->pc = 0x1c3028u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c302c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C302Cu;
    SET_GPR_U32(ctx, 31, 0x1C3034u);
    ctx->pc = 0x1C3030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C302Cu;
            // 0x1c3030: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3034u; }
        if (ctx->pc != 0x1C3034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3034u; }
        if (ctx->pc != 0x1C3034u) { return; }
    }
    ctx->pc = 0x1C3034u;
label_1c3034:
    // 0x1c3034: 0x86050032  lh          $a1, 0x32($s0)
    ctx->pc = 0x1c3034u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1c3038: 0x86060034  lh          $a2, 0x34($s0)
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c303c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C303Cu;
    SET_GPR_U32(ctx, 31, 0x1C3044u);
    ctx->pc = 0x1C3040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C303Cu;
            // 0x1c3040: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3044u; }
        if (ctx->pc != 0x1C3044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3044u; }
        if (ctx->pc != 0x1C3044u) { return; }
    }
    ctx->pc = 0x1C3044u;
label_1c3044:
    // 0x1c3044: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c3044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c3048: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3048u;
    SET_GPR_U32(ctx, 31, 0x1C3050u);
    ctx->pc = 0x1C304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3048u;
            // 0x1c304c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3050u; }
        if (ctx->pc != 0x1C3050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3050u; }
        if (ctx->pc != 0x1C3050u) { return; }
    }
    ctx->pc = 0x1C3050u;
label_1c3050:
    // 0x1c3050: 0x86030032  lh          $v1, 0x32($s0)
    ctx->pc = 0x1c3050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1c3054: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c3054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c3058: 0x86020036  lh          $v0, 0x36($s0)
    ctx->pc = 0x1c3058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1c305c: 0x86060034  lh          $a2, 0x34($s0)
    ctx->pc = 0x1c305cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c3060: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3060u;
    SET_GPR_U32(ctx, 31, 0x1C3068u);
    ctx->pc = 0x1C3064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3060u;
            // 0x1c3064: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3068u; }
        if (ctx->pc != 0x1C3068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3068u; }
        if (ctx->pc != 0x1C3068u) { return; }
    }
    ctx->pc = 0x1C3068u;
label_1c3068:
    // 0x1c3068: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c3068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c306c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C306Cu;
    SET_GPR_U32(ctx, 31, 0x1C3074u);
    ctx->pc = 0x1C3070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C306Cu;
            // 0x1c3070: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3074u; }
        if (ctx->pc != 0x1C3074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3074u; }
        if (ctx->pc != 0x1C3074u) { return; }
    }
    ctx->pc = 0x1C3074u;
label_1c3074:
    // 0x1c3074: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x1c3074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c3078: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c3078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c307c: 0x86020036  lh          $v0, 0x36($s0)
    ctx->pc = 0x1c307cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1c3080: 0x86050032  lh          $a1, 0x32($s0)
    ctx->pc = 0x1c3080u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1c3084: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3084u;
    SET_GPR_U32(ctx, 31, 0x1C308Cu);
    ctx->pc = 0x1C3088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3084u;
            // 0x1c3088: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C308Cu; }
        if (ctx->pc != 0x1C308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C308Cu; }
        if (ctx->pc != 0x1C308Cu) { return; }
    }
    ctx->pc = 0x1C308Cu;
label_1c308c:
    // 0x1c308c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c3090: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3090u;
    SET_GPR_U32(ctx, 31, 0x1C3098u);
    ctx->pc = 0x1C3094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3090u;
            // 0x1c3094: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3098u; }
        if (ctx->pc != 0x1C3098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3098u; }
        if (ctx->pc != 0x1C3098u) { return; }
    }
    ctx->pc = 0x1C3098u;
label_1c3098:
    // 0x1c3098: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x1c3098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c309c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c30a0: 0x86020036  lh          $v0, 0x36($s0)
    ctx->pc = 0x1c30a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1c30a4: 0x86050032  lh          $a1, 0x32($s0)
    ctx->pc = 0x1c30a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1c30a8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C30A8u;
    SET_GPR_U32(ctx, 31, 0x1C30B0u);
    ctx->pc = 0x1C30ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30A8u;
            // 0x1c30ac: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30B0u; }
        if (ctx->pc != 0x1C30B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30B0u; }
        if (ctx->pc != 0x1C30B0u) { return; }
    }
    ctx->pc = 0x1C30B0u;
label_1c30b0:
    // 0x1c30b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c30b4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C30B4u;
    SET_GPR_U32(ctx, 31, 0x1C30BCu);
    ctx->pc = 0x1C30B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30B4u;
            // 0x1c30b8: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30BCu; }
        if (ctx->pc != 0x1C30BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30BCu; }
        if (ctx->pc != 0x1C30BCu) { return; }
    }
    ctx->pc = 0x1C30BCu;
label_1c30bc:
    // 0x1c30bc: 0x86030032  lh          $v1, 0x32($s0)
    ctx->pc = 0x1c30bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1c30c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c30c4: 0x86020036  lh          $v0, 0x36($s0)
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1c30c8: 0x86060034  lh          $a2, 0x34($s0)
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c30cc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C30CCu;
    SET_GPR_U32(ctx, 31, 0x1C30D4u);
    ctx->pc = 0x1C30D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30CCu;
            // 0x1c30d0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30D4u; }
        if (ctx->pc != 0x1C30D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30D4u; }
        if (ctx->pc != 0x1C30D4u) { return; }
    }
    ctx->pc = 0x1C30D4u;
label_1c30d4:
    // 0x1c30d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c30d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c30d8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C30D8u;
    SET_GPR_U32(ctx, 31, 0x1C30E0u);
    ctx->pc = 0x1C30DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30D8u;
            // 0x1c30dc: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30E0u; }
        if (ctx->pc != 0x1C30E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30E0u; }
        if (ctx->pc != 0x1C30E0u) { return; }
    }
    ctx->pc = 0x1C30E0u;
label_1c30e0:
    // 0x1c30e0: 0x86060036  lh          $a2, 0x36($s0)
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1c30e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c30e8: 0x86030032  lh          $v1, 0x32($s0)
    ctx->pc = 0x1c30e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1c30ec: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1c30ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c30f0: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1c30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c30f4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C30F4u;
    SET_GPR_U32(ctx, 31, 0x1C30FCu);
    ctx->pc = 0x1C30F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30F4u;
            // 0x1c30f8: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30FCu; }
        if (ctx->pc != 0x1C30FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30FCu; }
        if (ctx->pc != 0x1C30FCu) { return; }
    }
    ctx->pc = 0x1C30FCu;
label_1c30fc:
    // 0x1c30fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c3100: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3100u;
    SET_GPR_U32(ctx, 31, 0x1C3108u);
    ctx->pc = 0x1C3104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3100u;
            // 0x1c3104: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3108u; }
        if (ctx->pc != 0x1C3108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3108u; }
        if (ctx->pc != 0x1C3108u) { return; }
    }
    ctx->pc = 0x1C3108u;
label_1c3108:
    // 0x1c3108: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c3108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c310c:
    // 0x1c310c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C310Cu;
    SET_GPR_U32(ctx, 31, 0x1C3114u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3114u; }
        if (ctx->pc != 0x1C3114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3114u; }
        if (ctx->pc != 0x1C3114u) { return; }
    }
    ctx->pc = 0x1C3114u;
label_1c3114:
    // 0x1c3114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c311c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C311Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C311Cu;
            // 0x1c3120: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3124u;
}
