#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNetaMemoCursorPosition__11CMenuInventFiPi
// Address: 0x208540 - 0x2085a8
void GetNetaMemoCursorPosition__11CMenuInventFiPi_0x208540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNetaMemoCursorPosition__11CMenuInventFiPi_0x208540");
#endif

    switch (ctx->pc) {
        case 0x208570u: goto label_208570;
        default: break;
    }

    ctx->pc = 0x208540u;

    // 0x208540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x208548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20854c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20854cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208550: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x208550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208554: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x208554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x208558: 0x8c840eec  lw          $a0, 0xEEC($a0)
    ctx->pc = 0x208558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3820)));
    // 0x20855c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20855Cu;
    {
        const bool branch_taken_0x20855c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20855Cu;
            // 0x208560: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20855c) {
            ctx->pc = 0x208570u;
            goto label_208570;
        }
    }
    ctx->pc = 0x208564u;
    // 0x208564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208568: 0xc08974c  jal         func_225D30
    ctx->pc = 0x208568u;
    SET_GPR_U32(ctx, 31, 0x208570u);
    ctx->pc = 0x20856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208568u;
            // 0x20856c: 0x26070004  addiu       $a3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208570u; }
        if (ctx->pc != 0x208570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208570u; }
        if (ctx->pc != 0x208570u) { return; }
    }
    ctx->pc = 0x208570u;
label_208570:
    // 0x208570: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x208574: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x208574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x208578: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x208578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x20857c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x20857cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208580: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x208580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x208584: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x208584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x208588: 0x2484004e  addiu       $a0, $a0, 0x4E
    ctx->pc = 0x208588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 78));
    // 0x20858c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208590: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x208590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x208594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x208594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20859c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20859cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2085a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2085A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2085A0u;
            // 0x2085a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2085A8u;
}
