#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MES_ETC__FP12RS_STACKDATAi
// Address: 0x26d6d0 - 0x26d818
void ps2__GET_MES_ETC__FP12RS_STACKDATAi_0x26d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MES_ETC__FP12RS_STACKDATAi_0x26d6d0");
#endif

    switch (ctx->pc) {
        case 0x26d6e8u: goto label_26d6e8;
        case 0x26d6f0u: goto label_26d6f0;
        case 0x26d70cu: goto label_26d70c;
        case 0x26d748u: goto label_26d748;
        case 0x26d75cu: goto label_26d75c;
        case 0x26d76cu: goto label_26d76c;
        case 0x26d7a0u: goto label_26d7a0;
        case 0x26d7acu: goto label_26d7ac;
        case 0x26d7bcu: goto label_26d7bc;
        case 0x26d7c4u: goto label_26d7c4;
        case 0x26d7e4u: goto label_26d7e4;
        case 0x26d7f0u: goto label_26d7f0;
        default: break;
    }

    ctx->pc = 0x26d6d0u;

    // 0x26d6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d6d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26d6d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d6dc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26d6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d6e0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D6E0u;
    SET_GPR_U32(ctx, 31, 0x26D6E8u);
    ctx->pc = 0x26D6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6E0u;
            // 0x26d6e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D6E8u; }
        if (ctx->pc != 0x26D6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D6E8u; }
        if (ctx->pc != 0x26D6E8u) { return; }
    }
    ctx->pc = 0x26D6E8u;
label_26d6e8:
    // 0x26d6e8: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D6E8u;
    SET_GPR_U32(ctx, 31, 0x26D6F0u);
    ctx->pc = 0x26D6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6E8u;
            // 0x26d6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D6F0u; }
        if (ctx->pc != 0x26D6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D6F0u; }
        if (ctx->pc != 0x26D6F0u) { return; }
    }
    ctx->pc = 0x26D6F0u;
label_26d6f0:
    // 0x26d6f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6f4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D6F4u;
    {
        const bool branch_taken_0x26d6f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6F4u;
            // 0x26d6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6f4) {
            ctx->pc = 0x26D704u;
            goto label_26d704;
        }
    }
    ctx->pc = 0x26D6FCu;
    // 0x26d6fc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26D6FCu;
    {
        const bool branch_taken_0x26d6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6FCu;
            // 0x26d700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6fc) {
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D704u;
label_26d704:
    // 0x26d704: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D704u;
    SET_GPR_U32(ctx, 31, 0x26D70Cu);
    ctx->pc = 0x26D708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D704u;
            // 0x26d708: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D70Cu; }
        if (ctx->pc != 0x26D70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D70Cu; }
        if (ctx->pc != 0x26D70Cu) { return; }
    }
    ctx->pc = 0x26D70Cu;
label_26d70c:
    // 0x26d70c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d710: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x26D710u;
    {
        const bool branch_taken_0x26d710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D710u;
            // 0x26d714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d710) {
            ctx->pc = 0x26D7B4u;
            goto label_26d7b4;
        }
    }
    ctx->pc = 0x26D718u;
    // 0x26d718: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d71c: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26D71Cu;
    {
        const bool branch_taken_0x26d71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D71Cu;
            // 0x26d720: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d71c) {
            ctx->pc = 0x26D764u;
            goto label_26d764;
        }
    }
    ctx->pc = 0x26D724u;
    // 0x26d724: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26D724u;
    {
        const bool branch_taken_0x26d724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d724) {
            ctx->pc = 0x26D750u;
            goto label_26d750;
        }
    }
    ctx->pc = 0x26D72Cu;
    // 0x26d72c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D72Cu;
    {
        const bool branch_taken_0x26d72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d72c) {
            ctx->pc = 0x26D73Cu;
            goto label_26d73c;
        }
    }
    ctx->pc = 0x26D734u;
    // 0x26d734: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26D734u;
    {
        const bool branch_taken_0x26d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D734u;
            // 0x26d738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d734) {
            ctx->pc = 0x26D7F8u;
            goto label_26d7f8;
        }
    }
    ctx->pc = 0x26D73Cu;
label_26d73c:
    // 0x26d73c: 0x8e0517fc  lw          $a1, 0x17FC($s0)
    ctx->pc = 0x26d73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x26d740: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D740u;
    SET_GPR_U32(ctx, 31, 0x26D748u);
    ctx->pc = 0x26D744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D740u;
            // 0x26d744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D748u; }
        if (ctx->pc != 0x26D748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D748u; }
        if (ctx->pc != 0x26D748u) { return; }
    }
    ctx->pc = 0x26D748u;
label_26d748:
    // 0x26d748: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26D748u;
    {
        const bool branch_taken_0x26d748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D748u;
            // 0x26d74c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d748) {
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D750u;
label_26d750:
    // 0x26d750: 0x8e051afc  lw          $a1, 0x1AFC($s0)
    ctx->pc = 0x26d750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6908)));
    // 0x26d754: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D754u;
    SET_GPR_U32(ctx, 31, 0x26D75Cu);
    ctx->pc = 0x26D758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D754u;
            // 0x26d758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D75Cu; }
        if (ctx->pc != 0x26D75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D75Cu; }
        if (ctx->pc != 0x26D75Cu) { return; }
    }
    ctx->pc = 0x26D75Cu;
label_26d75c:
    // 0x26d75c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26D75Cu;
    {
        const bool branch_taken_0x26d75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d75c) {
            ctx->pc = 0x26D800u;
            goto label_26d800;
        }
    }
    ctx->pc = 0x26D764u;
label_26d764:
    // 0x26d764: 0xc064220  jal         func_190880
    ctx->pc = 0x26D764u;
    SET_GPR_U32(ctx, 31, 0x26D76Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D76Cu; }
        if (ctx->pc != 0x26D76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D76Cu; }
        if (ctx->pc != 0x26D76Cu) { return; }
    }
    ctx->pc = 0x26D76Cu;
label_26d76c:
    // 0x26d76c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26d770: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26d770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26d774: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x26d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x26d778: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D778u;
    {
        const bool branch_taken_0x26d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D778u;
            // 0x26d77c: 0x24444958  addiu       $a0, $v0, 0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d778) {
            ctx->pc = 0x26D788u;
            goto label_26d788;
        }
    }
    ctx->pc = 0x26D780u;
    // 0x26d780: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26D780u;
    {
        const bool branch_taken_0x26d780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D780u;
            // 0x26d784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d780) {
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D788u;
label_26d788:
    // 0x26d788: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D788u;
    {
        const bool branch_taken_0x26d788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D788u;
            // 0x26d78c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d788) {
            ctx->pc = 0x26D798u;
            goto label_26d798;
        }
    }
    ctx->pc = 0x26D790u;
    // 0x26d790: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26D790u;
    {
        const bool branch_taken_0x26d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D790u;
            // 0x26d794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d790) {
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D798u;
label_26d798:
    // 0x26d798: 0xc066904  jal         func_19A410
    ctx->pc = 0x26D798u;
    SET_GPR_U32(ctx, 31, 0x26D7A0u);
    ctx->pc = 0x19A410u;
    if (runtime->hasFunction(0x19A410u)) {
        auto targetFn = runtime->lookupFunction(0x19A410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7A0u; }
        if (ctx->pc != 0x26D7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishNum__13CFishAquariumFi_0x19a410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7A0u; }
        if (ctx->pc != 0x26D7A0u) { return; }
    }
    ctx->pc = 0x26D7A0u;
label_26d7a0:
    // 0x26d7a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7a4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D7A4u;
    SET_GPR_U32(ctx, 31, 0x26D7ACu);
    ctx->pc = 0x26D7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7A4u;
            // 0x26d7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7ACu; }
        if (ctx->pc != 0x26D7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7ACu; }
        if (ctx->pc != 0x26D7ACu) { return; }
    }
    ctx->pc = 0x26D7ACu;
label_26d7ac:
    // 0x26d7ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26D7ACu;
    {
        const bool branch_taken_0x26d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d7ac) {
            ctx->pc = 0x26D800u;
            goto label_26d800;
        }
    }
    ctx->pc = 0x26D7B4u;
label_26d7b4:
    // 0x26d7b4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D7B4u;
    SET_GPR_U32(ctx, 31, 0x26D7BCu);
    ctx->pc = 0x26D7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7B4u;
            // 0x26d7b8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7BCu; }
        if (ctx->pc != 0x26D7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7BCu; }
        if (ctx->pc != 0x26D7BCu) { return; }
    }
    ctx->pc = 0x26D7BCu;
label_26d7bc:
    // 0x26d7bc: 0xc0c65c4  jal         func_319710
    ctx->pc = 0x26D7BCu;
    SET_GPR_U32(ctx, 31, 0x26D7C4u);
    ctx->pc = 0x26D7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7BCu;
            // 0x26d7c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319710u;
    if (runtime->hasFunction(0x319710u)) {
        auto targetFn = runtime->lookupFunction(0x319710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7C4u; }
        if (ctx->pc != 0x26D7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerInfo__Fi_0x319710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7C4u; }
        if (ctx->pc != 0x26D7C4u) { return; }
    }
    ctx->pc = 0x26D7C4u;
label_26d7c4:
    // 0x26d7c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D7C4u;
    {
        const bool branch_taken_0x26d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d7c4) {
            ctx->pc = 0x26D7D4u;
            goto label_26d7d4;
        }
    }
    ctx->pc = 0x26D7CCu;
    // 0x26d7cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26D7CCu;
    {
        const bool branch_taken_0x26d7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7CCu;
            // 0x26d7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7cc) {
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D7D4u;
label_26d7d4:
    // 0x26d7d4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x26d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26d7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7dc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D7DCu;
    SET_GPR_U32(ctx, 31, 0x26D7E4u);
    ctx->pc = 0x26D7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7DCu;
            // 0x26d7e0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7E4u; }
        if (ctx->pc != 0x26D7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7E4u; }
        if (ctx->pc != 0x26D7E4u) { return; }
    }
    ctx->pc = 0x26D7E4u;
label_26d7e4:
    // 0x26d7e4: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x26d7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26d7e8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D7E8u;
    SET_GPR_U32(ctx, 31, 0x26D7F0u);
    ctx->pc = 0x26D7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7E8u;
            // 0x26d7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7F0u; }
        if (ctx->pc != 0x26D7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D7F0u; }
        if (ctx->pc != 0x26D7F0u) { return; }
    }
    ctx->pc = 0x26D7F0u;
label_26d7f0:
    // 0x26d7f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26D7F0u;
    {
        const bool branch_taken_0x26d7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d7f0) {
            ctx->pc = 0x26D800u;
            goto label_26d800;
        }
    }
    ctx->pc = 0x26D7F8u;
label_26d7f8:
    // 0x26d7f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26D7F8u;
    {
        const bool branch_taken_0x26d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D7F8u;
            // 0x26d7fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7f8) {
            ctx->pc = 0x26D808u;
            goto label_26d808;
        }
    }
    ctx->pc = 0x26D800u;
label_26d800:
    // 0x26d800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d804:
    // 0x26d804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26d804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26d808:
    // 0x26d808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d810: 0x3e00008  jr          $ra
    ctx->pc = 0x26D810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D810u;
            // 0x26d814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D818u;
}
