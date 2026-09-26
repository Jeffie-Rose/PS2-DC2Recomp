#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitialPlaceParts__8CEditMapFP9CEditData
// Address: 0x1b0660 - 0x1b0778
void InitialPlaceParts__8CEditMapFP9CEditData_0x1b0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitialPlaceParts__8CEditMapFP9CEditData_0x1b0660");
#endif

    switch (ctx->pc) {
        case 0x1b0694u: goto label_1b0694;
        case 0x1b06a8u: goto label_1b06a8;
        case 0x1b06bcu: goto label_1b06bc;
        case 0x1b06c8u: goto label_1b06c8;
        case 0x1b06e8u: goto label_1b06e8;
        case 0x1b06fcu: goto label_1b06fc;
        case 0x1b071cu: goto label_1b071c;
        case 0x1b073cu: goto label_1b073c;
        default: break;
    }

    ctx->pc = 0x1b0660u;

    // 0x1b0660: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b0660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b0664: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b0668: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b0668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b066c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b0670: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b067c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0680: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B0680u;
    {
        const bool branch_taken_0x1b0680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0680u;
            // 0x1b0684: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0680) {
            ctx->pc = 0x1B0758u;
            goto label_1b0758;
        }
    }
    ctx->pc = 0x1B0688u;
    // 0x1b0688: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b068c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1B068Cu;
    {
        const bool branch_taken_0x1b068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B068Cu;
            // 0x1b0690: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b068c) {
            ctx->pc = 0x1B0748u;
            goto label_1b0748;
        }
    }
    ctx->pc = 0x1B0694u;
label_1b0694:
    // 0x1b0694: 0x8e220fa8  lw          $v0, 0xFA8($s1)
    ctx->pc = 0x1b0694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4008)));
    // 0x1b0698: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x1b0698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b069c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1b069cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b06a0: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x1B06A0u;
    SET_GPR_U32(ctx, 31, 0x1B06A8u);
    ctx->pc = 0x1B06A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06A0u;
            // 0x1b06a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06A8u; }
        if (ctx->pc != 0x1B06A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06A8u; }
        if (ctx->pc != 0x1B06A8u) { return; }
    }
    ctx->pc = 0x1B06A8u;
label_1b06a8:
    // 0x1b06a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b06a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06ac: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B06ACu;
    {
        const bool branch_taken_0x1b06ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06ACu;
            // 0x1b06b0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06ac) {
            ctx->pc = 0x1B073Cu;
            goto label_1b073c;
        }
    }
    ctx->pc = 0x1B06B4u;
    // 0x1b06b4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1B06B4u;
    SET_GPR_U32(ctx, 31, 0x1B06BCu);
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06BCu; }
        if (ctx->pc != 0x1B06BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06BCu; }
        if (ctx->pc != 0x1B06BCu) { return; }
    }
    ctx->pc = 0x1B06BCu;
label_1b06bc:
    // 0x1b06bc: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b06c0: 0xc06c3c0  jal         func_1B0F00
    ctx->pc = 0x1B06C0u;
    SET_GPR_U32(ctx, 31, 0x1B06C8u);
    ctx->pc = 0x1B06C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06C0u;
            // 0x1b06c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06C8u; }
        if (ctx->pc != 0x1B06C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06C8u; }
        if (ctx->pc != 0x1B06C8u) { return; }
    }
    ctx->pc = 0x1B06C8u;
label_1b06c8:
    // 0x1b06c8: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1b06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1b06cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b06ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b06d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b06d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b06d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06d8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1b06d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b06dc: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x1b06dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b06e0: 0xc06ca94  jal         func_1B2A50
    ctx->pc = 0x1B06E0u;
    SET_GPR_U32(ctx, 31, 0x1B06E8u);
    ctx->pc = 0x1B06E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06E0u;
            // 0x1b06e4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A50u;
    if (runtime->hasFunction(0x1B2A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B2A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E8u; }
        if (ctx->pc != 0x1B06E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFO_0x1b2a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E8u; }
        if (ctx->pc != 0x1B06E8u) { return; }
    }
    ctx->pc = 0x1B06E8u;
label_1b06e8:
    // 0x1b06e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B06E8u;
    {
        const bool branch_taken_0x1b06e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06e8) {
            ctx->pc = 0x1B0724u;
            goto label_1b0724;
        }
    }
    ctx->pc = 0x1B06F0u;
    // 0x1b06f0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1b06f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b06f4: 0xc06c528  jal         func_1B14A0
    ctx->pc = 0x1B06F4u;
    SET_GPR_U32(ctx, 31, 0x1B06FCu);
    ctx->pc = 0x1B06F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06F4u;
            // 0x1b06f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14A0u;
    if (runtime->hasFunction(0x1B14A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06FCu; }
        if (ctx->pc != 0x1B06FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildEditParts__8CEditMapFi_0x1b14a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06FCu; }
        if (ctx->pc != 0x1B06FCu) { return; }
    }
    ctx->pc = 0x1B06FCu;
label_1b06fc:
    // 0x1b06fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b06fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0700: 0x4a0000e  bltz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B0700u;
    {
        const bool branch_taken_0x1b0700 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B0704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0700u;
            // 0x1b0704: 0x26670010  addiu       $a3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0700) {
            ctx->pc = 0x1B073Cu;
            goto label_1b073c;
        }
    }
    ctx->pc = 0x1B0708u;
    // 0x1b0708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b070c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1b070cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b0710: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x1b0710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b0714: 0xc06c800  jal         func_1B2000
    ctx->pc = 0x1B0714u;
    SET_GPR_U32(ctx, 31, 0x1B071Cu);
    ctx->pc = 0x1B0718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0714u;
            // 0x1b0718: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2000u;
    if (runtime->hasFunction(0x1B2000u)) {
        auto targetFn = runtime->lookupFunction(0x1B2000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B071Cu; }
        if (ctx->pc != 0x1B071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__8CEditMapFiP13EP_PLACE_INFOPfPfPi_0x1b2000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B071Cu; }
        if (ctx->pc != 0x1B071Cu) { return; }
    }
    ctx->pc = 0x1B071Cu;
label_1b071c:
    // 0x1b071c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B071Cu;
    {
        const bool branch_taken_0x1b071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b071c) {
            ctx->pc = 0x1B073Cu;
            goto label_1b073c;
        }
    }
    ctx->pc = 0x1B0724u;
label_1b0724:
    // 0x1b0724: 0x0  nop
    ctx->pc = 0x1b0724u;
    // NOP
    // 0x1b0728: 0x8e86003c  lw          $a2, 0x3C($s4)
    ctx->pc = 0x1b0728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x1b072c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1b072cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1b0730: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0734: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1B0734u;
    SET_GPR_U32(ctx, 31, 0x1B073Cu);
    ctx->pc = 0x1B0738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0734u;
            // 0x1b0738: 0x24846560  addiu       $a0, $a0, 0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B073Cu; }
        if (ctx->pc != 0x1B073Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B073Cu; }
        if (ctx->pc != 0x1B073Cu) { return; }
    }
    ctx->pc = 0x1B073Cu;
label_1b073c:
    // 0x1b073c: 0x0  nop
    ctx->pc = 0x1b073cu;
    // NOP
    // 0x1b0740: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b0740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b0744: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b0748:
    // 0x1b0748: 0x8e230fa4  lw          $v1, 0xFA4($s1)
    ctx->pc = 0x1b0748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4004)));
    // 0x1b074c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1b074cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b0750: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1B0750u;
    {
        const bool branch_taken_0x1b0750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0750) {
            ctx->pc = 0x1B0694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0694;
        }
    }
    ctx->pc = 0x1B0758u;
label_1b0758:
    // 0x1b0758: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b0758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b075c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b075cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0760: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0764: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b076c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b076cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0770: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0770u;
            // 0x1b0774: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0778u;
}
