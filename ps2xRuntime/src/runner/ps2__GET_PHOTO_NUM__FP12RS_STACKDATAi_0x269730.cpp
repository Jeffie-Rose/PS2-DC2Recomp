#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PHOTO_NUM__FP12RS_STACKDATAi
// Address: 0x269730 - 0x2697a4
void ps2__GET_PHOTO_NUM__FP12RS_STACKDATAi_0x269730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PHOTO_NUM__FP12RS_STACKDATAi_0x269730");
#endif

    switch (ctx->pc) {
        case 0x269744u: goto label_269744;
        case 0x269784u: goto label_269784;
        case 0x269790u: goto label_269790;
        default: break;
    }

    ctx->pc = 0x269730u;

    // 0x269730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26973c: 0xc064220  jal         func_190880
    ctx->pc = 0x26973Cu;
    SET_GPR_U32(ctx, 31, 0x269744u);
    ctx->pc = 0x269740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26973Cu;
            // 0x269740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269744u; }
        if (ctx->pc != 0x269744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269744u; }
        if (ctx->pc != 0x269744u) { return; }
    }
    ctx->pc = 0x269744u;
label_269744:
    // 0x269744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269744u;
    {
        const bool branch_taken_0x269744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269744u;
            // 0x269748: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269744) {
            ctx->pc = 0x269754u;
            goto label_269754;
        }
    }
    ctx->pc = 0x26974Cu;
    // 0x26974c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26974Cu;
    {
        const bool branch_taken_0x26974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26974Cu;
            // 0x269750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26974c) {
            ctx->pc = 0x269794u;
            goto label_269794;
        }
    }
    ctx->pc = 0x269754u;
label_269754:
    // 0x269754: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x269754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x269758: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x269758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x26975c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26975Cu;
    {
        const bool branch_taken_0x26975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26975Cu;
            // 0x269760: 0x24447f30  addiu       $a0, $v0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26975c) {
            ctx->pc = 0x26976Cu;
            goto label_26976c;
        }
    }
    ctx->pc = 0x269764u;
    // 0x269764: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x269764u;
    {
        const bool branch_taken_0x269764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269764u;
            // 0x269768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269764) {
            ctx->pc = 0x269794u;
            goto label_269794;
        }
    }
    ctx->pc = 0x26976Cu;
label_26976c:
    // 0x26976c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26976Cu;
    {
        const bool branch_taken_0x26976c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x269770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26976Cu;
            // 0x269770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26976c) {
            ctx->pc = 0x26977Cu;
            goto label_26977c;
        }
    }
    ctx->pc = 0x269774u;
    // 0x269774: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269774u;
    {
        const bool branch_taken_0x269774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269774u;
            // 0x269778: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269774) {
            ctx->pc = 0x269798u;
            goto label_269798;
        }
    }
    ctx->pc = 0x26977Cu;
label_26977c:
    // 0x26977c: 0xc07fb90  jal         func_1FEE40
    ctx->pc = 0x26977Cu;
    SET_GPR_U32(ctx, 31, 0x269784u);
    ctx->pc = 0x1FEE40u;
    if (runtime->hasFunction(0x1FEE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269784u; }
        if (ctx->pc != 0x269784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHavePictureNum__15CInventUserDataFv_0x1fee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269784u; }
        if (ctx->pc != 0x269784u) { return; }
    }
    ctx->pc = 0x269784u;
label_269784:
    // 0x269784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269788: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269788u;
    SET_GPR_U32(ctx, 31, 0x269790u);
    ctx->pc = 0x26978Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269788u;
            // 0x26978c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269790u; }
        if (ctx->pc != 0x269790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269790u; }
        if (ctx->pc != 0x269790u) { return; }
    }
    ctx->pc = 0x269790u;
label_269790:
    // 0x269790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269794:
    // 0x269794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_269798:
    // 0x269798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26979c: 0x3e00008  jr          $ra
    ctx->pc = 0x26979Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2697A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26979Cu;
            // 0x2697a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2697A4u;
}
