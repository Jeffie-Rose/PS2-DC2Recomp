#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildUpWeaponNameBoardDraw__FP11mgCDrawPrimffi
// Address: 0x24af90 - 0x24b0a4
void BuildUpWeaponNameBoardDraw__FP11mgCDrawPrimffi_0x24af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildUpWeaponNameBoardDraw__FP11mgCDrawPrimffi_0x24af90");
#endif

    switch (ctx->pc) {
        case 0x24afd4u: goto label_24afd4;
        case 0x24afecu: goto label_24afec;
        case 0x24b004u: goto label_24b004;
        case 0x24b018u: goto label_24b018;
        case 0x24b028u: goto label_24b028;
        case 0x24b034u: goto label_24b034;
        case 0x24b04cu: goto label_24b04c;
        case 0x24b05cu: goto label_24b05c;
        case 0x24b084u: goto label_24b084;
        default: break;
    }

    ctx->pc = 0x24af90u;

    // 0x24af90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24af94: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x24af94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x24af98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24af9c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x24af9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24afa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24afa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24afa4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x24afa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24afa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24afac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24afacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24afb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24afb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afb8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x24afb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24afbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x24afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24afc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24afc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24afc4: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x24afc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x24afc8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x24afc8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x24afcc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24AFCCu;
    SET_GPR_U32(ctx, 31, 0x24AFD4u);
    ctx->pc = 0x24AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AFCCu;
            // 0x24afd0: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AFD4u; }
        if (ctx->pc != 0x24AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AFD4u; }
        if (ctx->pc != 0x24AFD4u) { return; }
    }
    ctx->pc = 0x24AFD4u;
label_24afd4:
    // 0x24afd4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24afd8: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x24afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x24afdc: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x24afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x24afe0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x24afe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24afe4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24AFE4u;
    SET_GPR_U32(ctx, 31, 0x24AFECu);
    ctx->pc = 0x24AFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AFE4u;
            // 0x24afe8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AFECu; }
        if (ctx->pc != 0x24AFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AFECu; }
        if (ctx->pc != 0x24AFECu) { return; }
    }
    ctx->pc = 0x24AFECu;
label_24afec:
    // 0x24afec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24afecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24aff0: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x24aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x24aff4: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x24aff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x24aff8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x24aff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24affc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24AFFCu;
    SET_GPR_U32(ctx, 31, 0x24B004u);
    ctx->pc = 0x24B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AFFCu;
            // 0x24b000: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B004u; }
        if (ctx->pc != 0x24B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B004u; }
        if (ctx->pc != 0x24B004u) { return; }
    }
    ctx->pc = 0x24B004u;
label_24b004:
    // 0x24b004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b008: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24b00c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x24b00cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x24b010: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24B010u;
    SET_GPR_U32(ctx, 31, 0x24B018u);
    ctx->pc = 0x24B014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B010u;
            // 0x24b014: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B018u; }
        if (ctx->pc != 0x24B018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B018u; }
        if (ctx->pc != 0x24B018u) { return; }
    }
    ctx->pc = 0x24B018u;
label_24b018:
    // 0x24b018: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x24b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x24b01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b020: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B020u;
    SET_GPR_U32(ctx, 31, 0x24B028u);
    ctx->pc = 0x24B024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B020u;
            // 0x24b024: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B028u; }
        if (ctx->pc != 0x24B028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B028u; }
        if (ctx->pc != 0x24B028u) { return; }
    }
    ctx->pc = 0x24B028u;
label_24b028:
    // 0x24b028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b02c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B02Cu;
    SET_GPR_U32(ctx, 31, 0x24B034u);
    ctx->pc = 0x24B030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B02Cu;
            // 0x24b030: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B034u; }
        if (ctx->pc != 0x24B034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B034u; }
        if (ctx->pc != 0x24B034u) { return; }
    }
    ctx->pc = 0x24B034u;
label_24b034:
    // 0x24b034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24b034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b038: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24b038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b03c: 0x2627fff0  addiu       $a3, $s1, -0x10
    ctx->pc = 0x24b03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x24b040: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24b044: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B044u;
    SET_GPR_U32(ctx, 31, 0x24B04Cu);
    ctx->pc = 0x24B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B044u;
            // 0x24b048: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B04Cu; }
        if (ctx->pc != 0x24B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B04Cu; }
        if (ctx->pc != 0x24B04Cu) { return; }
    }
    ctx->pc = 0x24B04Cu;
label_24b04c:
    // 0x24b04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b050: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x24b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24b054: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24B054u;
    SET_GPR_U32(ctx, 31, 0x24B05Cu);
    ctx->pc = 0x24B058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B054u;
            // 0x24b058: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B05Cu; }
        if (ctx->pc != 0x24B05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B05Cu; }
        if (ctx->pc != 0x24B05Cu) { return; }
    }
    ctx->pc = 0x24B05Cu;
label_24b05c:
    // 0x24b05c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b05cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b060: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x24b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x24b064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b068: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x24b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24b06c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b070: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x24b070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x24b074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b078: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x24b078u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x24b07c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24B07Cu;
    SET_GPR_U32(ctx, 31, 0x24B084u);
    ctx->pc = 0x24B080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B07Cu;
            // 0x24b080: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B084u; }
        if (ctx->pc != 0x24B084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B084u; }
        if (ctx->pc != 0x24B084u) { return; }
    }
    ctx->pc = 0x24B084u;
label_24b084:
    // 0x24b084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24b084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b088: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x24b088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24b08c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24b08cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b090: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24b094: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24b094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24b098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b09c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B09Cu;
            // 0x24b0a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24B0A4u;
}
