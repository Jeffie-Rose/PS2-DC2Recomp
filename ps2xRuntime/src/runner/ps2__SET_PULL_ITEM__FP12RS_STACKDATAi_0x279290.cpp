#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PULL_ITEM__FP12RS_STACKDATAi
// Address: 0x279290 - 0x2794cc
void ps2__SET_PULL_ITEM__FP12RS_STACKDATAi_0x279290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PULL_ITEM__FP12RS_STACKDATAi_0x279290");
#endif

    switch (ctx->pc) {
        case 0x2792c4u: goto label_2792c4;
        case 0x2792d4u: goto label_2792d4;
        case 0x2792e4u: goto label_2792e4;
        case 0x2792f0u: goto label_2792f0;
        case 0x2792fcu: goto label_2792fc;
        case 0x279334u: goto label_279334;
        case 0x27933cu: goto label_27933c;
        case 0x279358u: goto label_279358;
        case 0x279378u: goto label_279378;
        case 0x279398u: goto label_279398;
        case 0x2793bcu: goto label_2793bc;
        case 0x2793e8u: goto label_2793e8;
        case 0x27942cu: goto label_27942c;
        case 0x279468u: goto label_279468;
        case 0x279488u: goto label_279488;
        default: break;
    }

    ctx->pc = 0x279290u;

    // 0x279290: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x279290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x279294: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x279294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x279298: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x279298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27929c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2792a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2792a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2792a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2792a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2792a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2792a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2792acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2792b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2792b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2792b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2792b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2792b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2792b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792bc: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2792BCu;
    SET_GPR_U32(ctx, 31, 0x2792C4u);
    ctx->pc = 0x2792C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2792BCu;
            // 0x2792c0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792C4u; }
        if (ctx->pc != 0x2792C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792C4u; }
        if (ctx->pc != 0x2792C4u) { return; }
    }
    ctx->pc = 0x2792C4u;
label_2792c4:
    // 0x2792c4: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x2792c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2792c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2792c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2792CCu;
    SET_GPR_U32(ctx, 31, 0x2792D4u);
    ctx->pc = 0x2792D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2792CCu;
            // 0x2792d0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792D4u; }
        if (ctx->pc != 0x2792D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792D4u; }
        if (ctx->pc != 0x2792D4u) { return; }
    }
    ctx->pc = 0x2792D4u;
label_2792d4:
    // 0x2792d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2792d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2792d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2792DCu;
    SET_GPR_U32(ctx, 31, 0x2792E4u);
    ctx->pc = 0x2792E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2792DCu;
            // 0x2792e0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792E4u; }
        if (ctx->pc != 0x2792E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792E4u; }
        if (ctx->pc != 0x2792E4u) { return; }
    }
    ctx->pc = 0x2792E4u;
label_2792e4:
    // 0x2792e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2792e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792e8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2792E8u;
    SET_GPR_U32(ctx, 31, 0x2792F0u);
    ctx->pc = 0x2792ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2792E8u;
            // 0x2792ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792F0u; }
        if (ctx->pc != 0x2792F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792F0u; }
        if (ctx->pc != 0x2792F0u) { return; }
    }
    ctx->pc = 0x2792F0u;
label_2792f0:
    // 0x2792f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2792f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2792f4: 0xc064220  jal         func_190880
    ctx->pc = 0x2792F4u;
    SET_GPR_U32(ctx, 31, 0x2792FCu);
    ctx->pc = 0x2792F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2792F4u;
            // 0x2792f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792FCu; }
        if (ctx->pc != 0x2792FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2792FCu; }
        if (ctx->pc != 0x2792FCu) { return; }
    }
    ctx->pc = 0x2792FCu;
label_2792fc:
    // 0x2792fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2792FCu;
    {
        const bool branch_taken_0x2792fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2792FCu;
            // 0x279300: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792fc) {
            ctx->pc = 0x27930Cu;
            goto label_27930c;
        }
    }
    ctx->pc = 0x279304u;
    // 0x279304: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x279304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x279308: 0x419021  addu        $s2, $v0, $at
    ctx->pc = 0x279308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_27930c:
    // 0x27930c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27930Cu;
    {
        const bool branch_taken_0x27930c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x279310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27930Cu;
            // 0x279310: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27930c) {
            ctx->pc = 0x27931Cu;
            goto label_27931c;
        }
    }
    ctx->pc = 0x279314u;
    // 0x279314: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x279314u;
    {
        const bool branch_taken_0x279314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279314u;
            // 0x279318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279314) {
            ctx->pc = 0x2794A4u;
            goto label_2794a4;
        }
    }
    ctx->pc = 0x27931Cu;
label_27931c:
    // 0x27931c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x27931cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x279320: 0x84344d96  lh          $s4, 0x4D96($at)
    ctx->pc = 0x279320u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x279324: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x279324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x279328: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x279328u;
    {
        const bool branch_taken_0x279328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279328u;
            // 0x27932c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279328) {
            ctx->pc = 0x2794A0u;
            goto label_2794a0;
        }
    }
    ctx->pc = 0x279330u;
    // 0x279330: 0x27848de8  addiu       $a0, $gp, -0x7218
    ctx->pc = 0x279330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
label_279334:
    // 0x279334: 0xc06e574  jal         func_1B95D0
    ctx->pc = 0x279334u;
    SET_GPR_U32(ctx, 31, 0x27933Cu);
    ctx->pc = 0x279338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279334u;
            // 0x279338: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27933Cu; }
        if (ctx->pc != 0x27933Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27933Cu; }
        if (ctx->pc != 0x27933Cu) { return; }
    }
    ctx->pc = 0x27933Cu;
label_27933c:
    // 0x27933c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27933cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279340: 0x12600052  beqz        $s3, . + 4 + (0x52 << 2)
    ctx->pc = 0x279340u;
    {
        const bool branch_taken_0x279340 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x279344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279340u;
            // 0x279344: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279340) {
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x279348u;
    // 0x279348: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x279348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x27934c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27934cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x279350: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x279350u;
    SET_GPR_U32(ctx, 31, 0x279358u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279358u; }
        if (ctx->pc != 0x279358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279358u; }
        if (ctx->pc != 0x279358u) { return; }
    }
    ctx->pc = 0x279358u;
label_279358:
    // 0x279358: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x279358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x27935c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27935cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x279360: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x279360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x279364: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x279364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279368: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x279368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27936c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27936cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279370: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x279370u;
    SET_GPR_U32(ctx, 31, 0x279378u);
    ctx->pc = 0x279374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279370u;
            // 0x279374: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279378u; }
        if (ctx->pc != 0x279378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279378u; }
        if (ctx->pc != 0x279378u) { return; }
    }
    ctx->pc = 0x279378u;
label_279378:
    // 0x279378: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x279378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27937c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x27937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x279380: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x279380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279384: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x279384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x279388: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x279388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27938c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27938cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279390: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x279390u;
    SET_GPR_U32(ctx, 31, 0x279398u);
    ctx->pc = 0x279394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279390u;
            // 0x279394: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279398u; }
        if (ctx->pc != 0x279398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279398u; }
        if (ctx->pc != 0x279398u) { return; }
    }
    ctx->pc = 0x279398u;
label_279398:
    // 0x279398: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x279398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x27939c: 0x27b50098  addiu       $s5, $sp, 0x98
    ctx->pc = 0x27939cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2793a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2793a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2793a4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2793a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2793a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2793a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2793ac: 0x0  nop
    ctx->pc = 0x2793acu;
    // NOP
    // 0x2793b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2793b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2793b4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x2793B4u;
    SET_GPR_U32(ctx, 31, 0x2793BCu);
    ctx->pc = 0x2793B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2793B4u;
            // 0x2793b8: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2793BCu; }
        if (ctx->pc != 0x2793BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2793BCu; }
        if (ctx->pc != 0x2793BCu) { return; }
    }
    ctx->pc = 0x2793BCu;
label_2793bc:
    // 0x2793bc: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x2793bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2793c0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2793C0u;
    {
        const bool branch_taken_0x2793c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2793c0) {
            ctx->pc = 0x2793E0u;
            goto label_2793e0;
        }
    }
    ctx->pc = 0x2793C8u;
    // 0x2793c8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2793c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2793cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2793ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2793d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2793d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2793d4: 0x0  nop
    ctx->pc = 0x2793d4u;
    // NOP
    // 0x2793d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2793d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2793dc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2793dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2793e0:
    // 0x2793e0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x2793E0u;
    SET_GPR_U32(ctx, 31, 0x2793E8u);
    ctx->pc = 0x2793E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2793E0u;
            // 0x2793e4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2793E8u; }
        if (ctx->pc != 0x2793E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2793E8u; }
        if (ctx->pc != 0x2793E8u) { return; }
    }
    ctx->pc = 0x2793E8u;
label_2793e8:
    // 0x2793e8: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x2793e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2793ec: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2793ECu;
    {
        const bool branch_taken_0x2793ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2793ec) {
            ctx->pc = 0x27940Cu;
            goto label_27940c;
        }
    }
    ctx->pc = 0x2793F4u;
    // 0x2793f4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2793f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2793f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2793f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2793fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2793fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279400: 0x0  nop
    ctx->pc = 0x279400u;
    // NOP
    // 0x279404: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x279404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x279408: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x279408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_27940c:
    // 0x27940c: 0x0  nop
    ctx->pc = 0x27940cu;
    // NOP
    // 0x279410: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x279410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x279414: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x279414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x279418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x279418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27941c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x27941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x279420: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x279420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x279424: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x279424u;
    SET_GPR_U32(ctx, 31, 0x27942Cu);
    ctx->pc = 0x279428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279424u;
            // 0x279428: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27942Cu; }
        if (ctx->pc != 0x27942Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27942Cu; }
        if (ctx->pc != 0x27942Cu) { return; }
    }
    ctx->pc = 0x27942Cu;
label_27942c:
    // 0x27942c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x279430: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x279430u;
    {
        const bool branch_taken_0x279430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x279434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279430u;
            // 0x279434: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279430) {
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x279438u;
    // 0x279438: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x279438u;
    {
        const bool branch_taken_0x279438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x27943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279438u;
            // 0x27943c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279438) {
            ctx->pc = 0x279480u;
            goto label_279480;
        }
    }
    ctx->pc = 0x279440u;
    // 0x279440: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x279440u;
    {
        const bool branch_taken_0x279440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x279444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279440u;
            // 0x279444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279440) {
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x279448u;
    // 0x279448: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x279448u;
    {
        const bool branch_taken_0x279448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x279448) {
            ctx->pc = 0x279470u;
            goto label_279470;
        }
    }
    ctx->pc = 0x279450u;
    // 0x279450: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279450u;
    {
        const bool branch_taken_0x279450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x279450) {
            ctx->pc = 0x279460u;
            goto label_279460;
        }
    }
    ctx->pc = 0x279458u;
    // 0x279458: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x279458u;
    {
        const bool branch_taken_0x279458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279458) {
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x279460u;
label_279460:
    // 0x279460: 0xc0a248c  jal         func_289230
    ctx->pc = 0x279460u;
    SET_GPR_U32(ctx, 31, 0x279468u);
    ctx->pc = 0x279464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279460u;
            // 0x279464: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279468u; }
        if (ctx->pc != 0x279468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279468u; }
        if (ctx->pc != 0x279468u) { return; }
    }
    ctx->pc = 0x279468u;
label_279468:
    // 0x279468: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x279468u;
    {
        const bool branch_taken_0x279468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279468u;
            // 0x27946c: 0xa662006c  sh          $v0, 0x6C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 108), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279468) {
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x279470u;
label_279470:
    // 0x279470: 0xe6740064  swc1        $f20, 0x64($s3)
    ctx->pc = 0x279470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x279474: 0xa674006a  sh          $s4, 0x6A($s3)
    ctx->pc = 0x279474u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 106), (uint16_t)GPR_U32(ctx, 20));
    // 0x279478: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279478u;
    {
        const bool branch_taken_0x279478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279478u;
            // 0x27947c: 0xa663006c  sh          $v1, 0x6C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 108), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279478) {
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x279480u;
label_279480:
    // 0x279480: 0xc0a248c  jal         func_289230
    ctx->pc = 0x279480u;
    SET_GPR_U32(ctx, 31, 0x279488u);
    ctx->pc = 0x279484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279480u;
            // 0x279484: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279488u; }
        if (ctx->pc != 0x279488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279488u; }
        if (ctx->pc != 0x279488u) { return; }
    }
    ctx->pc = 0x279488u;
label_279488:
    // 0x279488: 0xa662006c  sh          $v0, 0x6C($s3)
    ctx->pc = 0x279488u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 108), (uint16_t)GPR_U32(ctx, 2));
label_27948c:
    // 0x27948c: 0x0  nop
    ctx->pc = 0x27948cu;
    // NOP
    // 0x279490: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x279490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x279494: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x279494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x279498: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x279498u;
    {
        const bool branch_taken_0x279498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27949Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279498u;
            // 0x27949c: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279498) {
            ctx->pc = 0x279334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279334;
        }
    }
    ctx->pc = 0x2794A0u;
label_2794a0:
    // 0x2794a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2794a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2794a4:
    // 0x2794a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2794a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2794a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2794a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2794ac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2794acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2794b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2794b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2794b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2794b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2794b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2794b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2794bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2794bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2794c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2794c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2794c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2794C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2794C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2794C4u;
            // 0x2794c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2794CCu;
}
