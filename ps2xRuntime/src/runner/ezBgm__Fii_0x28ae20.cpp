#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ezBgm__Fii
// Address: 0x28ae20 - 0x28afa8
void ezBgm__Fii_0x28ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ezBgm__Fii_0x28ae20");
#endif

    switch (ctx->pc) {
        case 0x28ae7cu: goto label_28ae7c;
        case 0x28ae90u: goto label_28ae90;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aed8u: goto label_28aed8;
        case 0x28aeecu: goto label_28aeec;
        case 0x28af28u: goto label_28af28;
        case 0x28af38u: goto label_28af38;
        case 0x28af4cu: goto label_28af4c;
        case 0x28af88u: goto label_28af88;
        default: break;
    }

    ctx->pc = 0x28ae20u;

    // 0x28ae20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28ae24: 0x3083fff0  andi        $v1, $a0, 0xFFF0
    ctx->pc = 0x28ae24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65520);
    // 0x28ae28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28ae2c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x28ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28ae30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28ae34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28ae38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ae38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae3c: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28AE3Cu;
    {
        const bool branch_taken_0x28ae3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE3Cu;
            // 0x28ae40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae3c) {
            ctx->pc = 0x28AECCu;
            goto label_28aecc;
        }
    }
    ctx->pc = 0x28AE44u;
    // 0x28ae44: 0x340280f0  ori         $v0, $zero, 0x80F0
    ctx->pc = 0x28ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x28ae48: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28AE48u;
    {
        const bool branch_taken_0x28ae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ae48) {
            ctx->pc = 0x28AE70u;
            goto label_28ae70;
        }
    }
    ctx->pc = 0x28AE50u;
    // 0x28ae50: 0x34028a00  ori         $v0, $zero, 0x8A00
    ctx->pc = 0x28ae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35328);
    // 0x28ae54: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AE54u;
    {
        const bool branch_taken_0x28ae54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ae54) {
            ctx->pc = 0x28AE70u;
            goto label_28ae70;
        }
    }
    ctx->pc = 0x28AE5Cu;
    // 0x28ae5c: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x28ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x28ae60: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28AE60u;
    {
        const bool branch_taken_0x28ae60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ae60) {
            ctx->pc = 0x28AE70u;
            goto label_28ae70;
        }
    }
    ctx->pc = 0x28AE68u;
    // 0x28ae68: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x28AE68u;
    {
        const bool branch_taken_0x28ae68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE68u;
            // 0x28ae6c: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae68) {
            ctx->pc = 0x28AF30u;
            goto label_28af30;
        }
    }
    ctx->pc = 0x28AE70u;
label_28ae70:
    // 0x28ae70: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x28ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x28ae74: 0xc044d1c  jal         func_113470
    ctx->pc = 0x28AE74u;
    SET_GPR_U32(ctx, 31, 0x28AE7Cu);
    ctx->pc = 0x28AE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE74u;
            // 0x28ae78: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113470u;
    if (runtime->hasFunction(0x113470u)) {
        auto targetFn = runtime->lookupFunction(0x113470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AE7Cu; }
        if (ctx->pc != 0x28AE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x113470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AE7Cu; }
        if (ctx->pc != 0x28AE7Cu) { return; }
    }
    ctx->pc = 0x28AE7Cu;
label_28ae7c:
    // 0x28ae7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AE7Cu;
    {
        const bool branch_taken_0x28ae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE7Cu;
            // 0x28ae80: 0x3c0901f0  lui         $t1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae7c) {
            ctx->pc = 0x28AE98u;
            goto label_28ae98;
        }
    }
    ctx->pc = 0x28AE84u;
    // 0x28ae84: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x28ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x28ae88: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x28AE88u;
    SET_GPR_U32(ctx, 31, 0x28AE90u);
    ctx->pc = 0x28AE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE88u;
            // 0x28ae8c: 0x2484d670  addiu       $a0, $a0, -0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AE90u; }
        if (ctx->pc != 0x28AE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AE90u; }
        if (ctx->pc != 0x28AE90u) { return; }
    }
    ctx->pc = 0x28AE90u;
label_28ae90:
    // 0x28ae90: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x28AE90u;
    {
        const bool branch_taken_0x28ae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE90u;
            // 0x28ae94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae90) {
            ctx->pc = 0x28AF94u;
            goto label_28af94;
        }
    }
    ctx->pc = 0x28AE98u;
label_28ae98:
    // 0x28ae98: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x28ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x28ae9c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x28ae9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28aea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28aea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aea4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28aea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aea8: 0x25295240  addiu       $t1, $t1, 0x5240
    ctx->pc = 0x28aea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21056));
    // 0x28aeac: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x28aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x28aeb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28aeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28aeb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28aeb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aeb8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x28aeb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aebc: 0xc044ca0  jal         func_113280
    ctx->pc = 0x28AEBCu;
    SET_GPR_U32(ctx, 31, 0x28AEC4u);
    ctx->pc = 0x28AEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEBCu;
            // 0x28aec0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113280u;
    if (runtime->hasFunction(0x113280u)) {
        auto targetFn = runtime->lookupFunction(0x113280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AEC4u; }
        if (ctx->pc != 0x28AEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x113280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AEC4u; }
        if (ctx->pc != 0x28AEC4u) { return; }
    }
    ctx->pc = 0x28AEC4u;
label_28aec4:
    // 0x28aec4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28AEC4u;
    {
        const bool branch_taken_0x28aec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aec4) {
            ctx->pc = 0x28AF88u;
            goto label_28af88;
        }
    }
    ctx->pc = 0x28AECCu;
label_28aecc:
    // 0x28aecc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x28aed0: 0xc044d1c  jal         func_113470
    ctx->pc = 0x28AED0u;
    SET_GPR_U32(ctx, 31, 0x28AED8u);
    ctx->pc = 0x28AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AED0u;
            // 0x28aed4: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113470u;
    if (runtime->hasFunction(0x113470u)) {
        auto targetFn = runtime->lookupFunction(0x113470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AED8u; }
        if (ctx->pc != 0x28AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x113470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AED8u; }
        if (ctx->pc != 0x28AED8u) { return; }
    }
    ctx->pc = 0x28AED8u;
label_28aed8:
    // 0x28aed8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AED8u;
    {
        const bool branch_taken_0x28aed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AED8u;
            // 0x28aedc: 0x3c0701f0  lui         $a3, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aed8) {
            ctx->pc = 0x28AEF4u;
            goto label_28aef4;
        }
    }
    ctx->pc = 0x28AEE0u;
    // 0x28aee0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x28aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x28aee4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x28AEE4u;
    SET_GPR_U32(ctx, 31, 0x28AEECu);
    ctx->pc = 0x28AEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEE4u;
            // 0x28aee8: 0x2484d690  addiu       $a0, $a0, -0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AEECu; }
        if (ctx->pc != 0x28AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AEECu; }
        if (ctx->pc != 0x28AEECu) { return; }
    }
    ctx->pc = 0x28AEECu;
label_28aeec:
    // 0x28aeec: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x28AEECu;
    {
        const bool branch_taken_0x28aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEECu;
            // 0x28aef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aeec) {
            ctx->pc = 0x28AF94u;
            goto label_28af94;
        }
    }
    ctx->pc = 0x28AEF4u;
label_28aef4:
    // 0x28aef4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28aef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x28aef8: 0x24e75240  addiu       $a3, $a3, 0x5240
    ctx->pc = 0x28aef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21056));
    // 0x28aefc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x28aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x28af00: 0xac305240  sw          $s0, 0x5240($at)
    ctx->pc = 0x28af00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21056), GPR_U32(ctx, 16));
    // 0x28af04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28af04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af08: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x28af08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af0c: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x28af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x28af10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28af10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28af14: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x28af14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28af18: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x28af18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28af1c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28af1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af20: 0xc044ca0  jal         func_113280
    ctx->pc = 0x28AF20u;
    SET_GPR_U32(ctx, 31, 0x28AF28u);
    ctx->pc = 0x28AF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF20u;
            // 0x28af24: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113280u;
    if (runtime->hasFunction(0x113280u)) {
        auto targetFn = runtime->lookupFunction(0x113280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF28u; }
        if (ctx->pc != 0x28AF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x113280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF28u; }
        if (ctx->pc != 0x28AF28u) { return; }
    }
    ctx->pc = 0x28AF28u;
label_28af28:
    // 0x28af28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28AF28u;
    {
        const bool branch_taken_0x28af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28af28) {
            ctx->pc = 0x28AF88u;
            goto label_28af88;
        }
    }
    ctx->pc = 0x28AF30u;
label_28af30:
    // 0x28af30: 0xc044d1c  jal         func_113470
    ctx->pc = 0x28AF30u;
    SET_GPR_U32(ctx, 31, 0x28AF38u);
    ctx->pc = 0x28AF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF30u;
            // 0x28af34: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113470u;
    if (runtime->hasFunction(0x113470u)) {
        auto targetFn = runtime->lookupFunction(0x113470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF38u; }
        if (ctx->pc != 0x28AF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x113470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF38u; }
        if (ctx->pc != 0x28AF38u) { return; }
    }
    ctx->pc = 0x28AF38u;
label_28af38:
    // 0x28af38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AF38u;
    {
        const bool branch_taken_0x28af38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF38u;
            // 0x28af3c: 0x3c0701f0  lui         $a3, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af38) {
            ctx->pc = 0x28AF54u;
            goto label_28af54;
        }
    }
    ctx->pc = 0x28AF40u;
    // 0x28af40: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x28af40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x28af44: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x28AF44u;
    SET_GPR_U32(ctx, 31, 0x28AF4Cu);
    ctx->pc = 0x28AF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF44u;
            // 0x28af48: 0x2484d6b0  addiu       $a0, $a0, -0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF4Cu; }
        if (ctx->pc != 0x28AF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF4Cu; }
        if (ctx->pc != 0x28AF4Cu) { return; }
    }
    ctx->pc = 0x28AF4Cu;
label_28af4c:
    // 0x28af4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28AF4Cu;
    {
        const bool branch_taken_0x28af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF4Cu;
            // 0x28af50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af4c) {
            ctx->pc = 0x28AF94u;
            goto label_28af94;
        }
    }
    ctx->pc = 0x28AF54u;
label_28af54:
    // 0x28af54: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28af54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x28af58: 0x24e75240  addiu       $a3, $a3, 0x5240
    ctx->pc = 0x28af58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21056));
    // 0x28af5c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x28af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x28af60: 0xac305240  sw          $s0, 0x5240($at)
    ctx->pc = 0x28af60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21056), GPR_U32(ctx, 16));
    // 0x28af64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28af64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af68: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x28af68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af6c: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x28af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x28af70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28af70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af74: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x28af74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28af78: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x28af78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28af7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28af7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af80: 0xc044ca0  jal         func_113280
    ctx->pc = 0x28AF80u;
    SET_GPR_U32(ctx, 31, 0x28AF88u);
    ctx->pc = 0x28AF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF80u;
            // 0x28af84: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113280u;
    if (runtime->hasFunction(0x113280u)) {
        auto targetFn = runtime->lookupFunction(0x113280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF88u; }
        if (ctx->pc != 0x28AF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x113280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF88u; }
        if (ctx->pc != 0x28AF88u) { return; }
    }
    ctx->pc = 0x28AF88u;
label_28af88:
    // 0x28af88: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x28af8c: 0x8c225240  lw          $v0, 0x5240($at)
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21056)));
    // 0x28af90: 0x0  nop
    ctx->pc = 0x28af90u;
    // NOP
label_28af94:
    // 0x28af94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28af94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28af98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28af98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28af9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28af9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28afa0: 0x3e00008  jr          $ra
    ctx->pc = 0x28AFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFA0u;
            // 0x28afa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28AFA8u;
}
