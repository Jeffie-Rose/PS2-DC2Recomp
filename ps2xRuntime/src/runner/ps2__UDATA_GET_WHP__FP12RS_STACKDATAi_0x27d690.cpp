#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _UDATA_GET_WHP__FP12RS_STACKDATAi
// Address: 0x27d690 - 0x27d780
void ps2__UDATA_GET_WHP__FP12RS_STACKDATAi_0x27d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__UDATA_GET_WHP__FP12RS_STACKDATAi_0x27d690");
#endif

    switch (ctx->pc) {
        case 0x27d6b4u: goto label_27d6b4;
        case 0x27d6e4u: goto label_27d6e4;
        case 0x27d6f4u: goto label_27d6f4;
        case 0x27d708u: goto label_27d708;
        case 0x27d734u: goto label_27d734;
        case 0x27d744u: goto label_27d744;
        case 0x27d750u: goto label_27d750;
        default: break;
    }

    ctx->pc = 0x27d690u;

    // 0x27d690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27d690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27d694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27d694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27d698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27d698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27d69c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27d6a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27d6a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d6a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27d6a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6ac: 0xc064220  jal         func_190880
    ctx->pc = 0x27D6ACu;
    SET_GPR_U32(ctx, 31, 0x27D6B4u);
    ctx->pc = 0x27D6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6ACu;
            // 0x27d6b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6B4u; }
        if (ctx->pc != 0x27D6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6B4u; }
        if (ctx->pc != 0x27D6B4u) { return; }
    }
    ctx->pc = 0x27D6B4u;
label_27d6b4:
    // 0x27d6b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D6B4u;
    {
        const bool branch_taken_0x27d6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6B4u;
            // 0x27d6b8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6b4) {
            ctx->pc = 0x27D6C4u;
            goto label_27d6c4;
        }
    }
    ctx->pc = 0x27D6BCu;
    // 0x27d6bc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x27D6BCu;
    {
        const bool branch_taken_0x27d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6BCu;
            // 0x27d6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6bc) {
            ctx->pc = 0x27D764u;
            goto label_27d764;
        }
    }
    ctx->pc = 0x27D6C4u;
label_27d6c4:
    // 0x27d6c4: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27d6c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27d6c8: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x27d6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27d6cc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D6CCu;
    {
        const bool branch_taken_0x27d6cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6CCu;
            // 0x27d6d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6cc) {
            ctx->pc = 0x27D6DCu;
            goto label_27d6dc;
        }
    }
    ctx->pc = 0x27D6D4u;
    // 0x27d6d4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27D6D4u;
    {
        const bool branch_taken_0x27d6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6D4u;
            // 0x27d6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6d4) {
            ctx->pc = 0x27D764u;
            goto label_27d764;
        }
    }
    ctx->pc = 0x27D6DCu;
label_27d6dc:
    // 0x27d6dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D6DCu;
    SET_GPR_U32(ctx, 31, 0x27D6E4u);
    ctx->pc = 0x27D6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6DCu;
            // 0x27d6e0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6E4u; }
        if (ctx->pc != 0x27D6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6E4u; }
        if (ctx->pc != 0x27D6E4u) { return; }
    }
    ctx->pc = 0x27D6E4u;
label_27d6e4:
    // 0x27d6e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D6ECu;
    SET_GPR_U32(ctx, 31, 0x27D6F4u);
    ctx->pc = 0x27D6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6ECu;
            // 0x27d6f0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6F4u; }
        if (ctx->pc != 0x27D6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6F4u; }
        if (ctx->pc != 0x27D6F4u) { return; }
    }
    ctx->pc = 0x27D6F4u;
label_27d6f4:
    // 0x27d6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27d6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d700: 0xc066e08  jal         func_19B820
    ctx->pc = 0x27D700u;
    SET_GPR_U32(ctx, 31, 0x27D708u);
    ctx->pc = 0x27D704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D700u;
            // 0x27d704: 0x27a7005c  addiu       $a3, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (runtime->hasFunction(0x19B820u)) {
        auto targetFn = runtime->lookupFunction(0x19B820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D708u; }
        if (ctx->pc != 0x27D708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWhp__16CUserDataManagerFiiPi_0x19b820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D708u; }
        if (ctx->pc != 0x27D708u) { return; }
    }
    ctx->pc = 0x27D708u;
label_27d708:
    // 0x27d708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d70c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d710: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27D710u;
    {
        const bool branch_taken_0x27d710 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D710u;
            // 0x27d714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d710) {
            ctx->pc = 0x27D73Cu;
            goto label_27d73c;
        }
    }
    ctx->pc = 0x27D718u;
    // 0x27d718: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27d718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d71c: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D71Cu;
    {
        const bool branch_taken_0x27d71c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D71Cu;
            // 0x27d720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d71c) {
            ctx->pc = 0x27D72Cu;
            goto label_27d72c;
        }
    }
    ctx->pc = 0x27D724u;
    // 0x27d724: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27D724u;
    {
        const bool branch_taken_0x27d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D724u;
            // 0x27d728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d724) {
            ctx->pc = 0x27D758u;
            goto label_27d758;
        }
    }
    ctx->pc = 0x27D72Cu;
label_27d72c:
    // 0x27d72c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D72Cu;
    SET_GPR_U32(ctx, 31, 0x27D734u);
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D734u; }
        if (ctx->pc != 0x27D734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D734u; }
        if (ctx->pc != 0x27D734u) { return; }
    }
    ctx->pc = 0x27D734u;
label_27d734:
    // 0x27d734: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27D734u;
    {
        const bool branch_taken_0x27d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D734u;
            // 0x27d738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d734) {
            ctx->pc = 0x27D764u;
            goto label_27d764;
        }
    }
    ctx->pc = 0x27D73Cu;
label_27d73c:
    // 0x27d73c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D73Cu;
    SET_GPR_U32(ctx, 31, 0x27D744u);
    ctx->pc = 0x27D740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D73Cu;
            // 0x27d740: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D744u; }
        if (ctx->pc != 0x27D744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D744u; }
        if (ctx->pc != 0x27D744u) { return; }
    }
    ctx->pc = 0x27D744u;
label_27d744:
    // 0x27d744: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x27d744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x27d748: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D748u;
    SET_GPR_U32(ctx, 31, 0x27D750u);
    ctx->pc = 0x27D74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D748u;
            // 0x27d74c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D750u; }
        if (ctx->pc != 0x27D750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D750u; }
        if (ctx->pc != 0x27D750u) { return; }
    }
    ctx->pc = 0x27D750u;
label_27d750:
    // 0x27d750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D750u;
    {
        const bool branch_taken_0x27d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d750) {
            ctx->pc = 0x27D760u;
            goto label_27d760;
        }
    }
    ctx->pc = 0x27D758u;
label_27d758:
    // 0x27d758: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D758u;
    {
        const bool branch_taken_0x27d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D758u;
            // 0x27d75c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d758) {
            ctx->pc = 0x27D768u;
            goto label_27d768;
        }
    }
    ctx->pc = 0x27D760u;
label_27d760:
    // 0x27d760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d764:
    // 0x27d764: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27d764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27d768:
    // 0x27d768: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d76c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d778: 0x3e00008  jr          $ra
    ctx->pc = 0x27D778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D778u;
            // 0x27d77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D780u;
}
