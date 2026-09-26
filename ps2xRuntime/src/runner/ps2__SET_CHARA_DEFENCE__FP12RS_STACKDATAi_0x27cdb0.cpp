#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_DEFENCE__FP12RS_STACKDATAi
// Address: 0x27cdb0 - 0x27ce28
void ps2__SET_CHARA_DEFENCE__FP12RS_STACKDATAi_0x27cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_DEFENCE__FP12RS_STACKDATAi_0x27cdb0");
#endif

    switch (ctx->pc) {
        case 0x27cdc8u: goto label_27cdc8;
        case 0x27cdd4u: goto label_27cdd4;
        case 0x27cddcu: goto label_27cddc;
        case 0x27ce0cu: goto label_27ce0c;
        default: break;
    }

    ctx->pc = 0x27cdb0u;

    // 0x27cdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27cdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27cdb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27cdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27cdc0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CDC0u;
    SET_GPR_U32(ctx, 31, 0x27CDC8u);
    ctx->pc = 0x27CDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDC0u;
            // 0x27cdc4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDC8u; }
        if (ctx->pc != 0x27CDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDC8u; }
        if (ctx->pc != 0x27CDC8u) { return; }
    }
    ctx->pc = 0x27CDC8u;
label_27cdc8:
    // 0x27cdc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cdcc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CDCCu;
    SET_GPR_U32(ctx, 31, 0x27CDD4u);
    ctx->pc = 0x27CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDCCu;
            // 0x27cdd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDD4u; }
        if (ctx->pc != 0x27CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDD4u; }
        if (ctx->pc != 0x27CDD4u) { return; }
    }
    ctx->pc = 0x27CDD4u;
label_27cdd4:
    // 0x27cdd4: 0xc064220  jal         func_190880
    ctx->pc = 0x27CDD4u;
    SET_GPR_U32(ctx, 31, 0x27CDDCu);
    ctx->pc = 0x27CDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDD4u;
            // 0x27cdd8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDDCu; }
        if (ctx->pc != 0x27CDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDDCu; }
        if (ctx->pc != 0x27CDDCu) { return; }
    }
    ctx->pc = 0x27CDDCu;
label_27cddc:
    // 0x27cddc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CDDCu;
    {
        const bool branch_taken_0x27cddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDDCu;
            // 0x27cde0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cddc) {
            ctx->pc = 0x27CDECu;
            goto label_27cdec;
        }
    }
    ctx->pc = 0x27CDE4u;
    // 0x27cde4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27CDE4u;
    {
        const bool branch_taken_0x27cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDE4u;
            // 0x27cde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cde4) {
            ctx->pc = 0x27CE14u;
            goto label_27ce14;
        }
    }
    ctx->pc = 0x27CDECu;
label_27cdec:
    // 0x27cdec: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27cdecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27cdf0: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x27cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27cdf4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CDF4u;
    {
        const bool branch_taken_0x27cdf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDF4u;
            // 0x27cdf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdf4) {
            ctx->pc = 0x27CE04u;
            goto label_27ce04;
        }
    }
    ctx->pc = 0x27CDFCu;
    // 0x27cdfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27CDFCu;
    {
        const bool branch_taken_0x27cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDFCu;
            // 0x27ce00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdfc) {
            ctx->pc = 0x27CE14u;
            goto label_27ce14;
        }
    }
    ctx->pc = 0x27CE04u;
label_27ce04:
    // 0x27ce04: 0xc066d24  jal         func_19B490
    ctx->pc = 0x27CE04u;
    SET_GPR_U32(ctx, 31, 0x27CE0Cu);
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE0Cu; }
        if (ctx->pc != 0x27CE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE0Cu; }
        if (ctx->pc != 0x27CE0Cu) { return; }
    }
    ctx->pc = 0x27CE0Cu;
label_27ce0c:
    // 0x27ce0c: 0xa451000a  sh          $s1, 0xA($v0)
    ctx->pc = 0x27ce0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x27ce10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ce14:
    // 0x27ce14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27ce14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ce18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ce18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ce1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ce1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ce20: 0x3e00008  jr          $ra
    ctx->pc = 0x27CE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE20u;
            // 0x27ce24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CE28u;
}
