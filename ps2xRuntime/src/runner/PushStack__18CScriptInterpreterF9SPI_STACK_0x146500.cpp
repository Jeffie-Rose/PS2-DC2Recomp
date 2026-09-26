#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PushStack__18CScriptInterpreterF9SPI_STACK
// Address: 0x146500 - 0x146568
void PushStack__18CScriptInterpreterF9SPI_STACK_0x146500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PushStack__18CScriptInterpreterF9SPI_STACK_0x146500");
#endif

    switch (ctx->pc) {
        case 0x146530u: goto label_146530;
        case 0x14654cu: goto label_14654c;
        default: break;
    }

    ctx->pc = 0x146500u;

    // 0x146500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x146500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x146504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14650c: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x14650cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x146510: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x146510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x146514: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x146514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x146518: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x146518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14651c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14651Cu;
    {
        const bool branch_taken_0x14651c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14651Cu;
            // 0x146520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14651c) {
            ctx->pc = 0x146538u;
            goto label_146538;
        }
    }
    ctx->pc = 0x146524u;
    // 0x146524: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x146524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x146528: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x146528u;
    SET_GPR_U32(ctx, 31, 0x146530u);
    ctx->pc = 0x14652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146528u;
            // 0x14652c: 0x24842700  addiu       $a0, $a0, 0x2700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146530u; }
        if (ctx->pc != 0x146530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146530u; }
        if (ctx->pc != 0x146530u) { return; }
    }
    ctx->pc = 0x146530u;
label_146530:
    // 0x146530: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x146530u;
    {
        const bool branch_taken_0x146530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146530u;
            // 0x146534: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146530) {
            ctx->pc = 0x14655Cu;
            goto label_14655c;
        }
    }
    ctx->pc = 0x146538u;
label_146538:
    // 0x146538: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x146538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14653c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14653cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x146540: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x146540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x146544: 0xc05195c  jal         func_146570
    ctx->pc = 0x146544u;
    SET_GPR_U32(ctx, 31, 0x14654Cu);
    ctx->pc = 0x146548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146544u;
            // 0x146548: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146570u;
    if (runtime->hasFunction(0x146570u)) {
        auto targetFn = runtime->lookupFunction(0x146570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14654Cu; }
        if (ctx->pc != 0x14654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9SPI_STACKFRC9SPI_STACK_0x146570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14654Cu; }
        if (ctx->pc != 0x14654Cu) { return; }
    }
    ctx->pc = 0x14654Cu;
label_14654c:
    // 0x14654c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x146550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146554: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x146554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x146558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14655c:
    // 0x14655c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14655cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146560: 0x3e00008  jr          $ra
    ctx->pc = 0x146560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146560u;
            // 0x146564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146568u;
}
