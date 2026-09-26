#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_SET_QUESTIONGYOU__FP9SPI_STACKi
// Address: 0x254920 - 0x254980
void ps2__MENU_SET_QUESTIONGYOU__FP9SPI_STACKi_0x254920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_SET_QUESTIONGYOU__FP9SPI_STACKi_0x254920");
#endif

    switch (ctx->pc) {
        case 0x254948u: goto label_254948;
        case 0x254954u: goto label_254954;
        default: break;
    }

    ctx->pc = 0x254920u;

    // 0x254920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25492c: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x25492cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254930: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254930u;
    {
        const bool branch_taken_0x254930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254930u;
            // 0x254934: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254930) {
            ctx->pc = 0x254940u;
            goto label_254940;
        }
    }
    ctx->pc = 0x254938u;
    // 0x254938: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x254938u;
    {
        const bool branch_taken_0x254938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254938u;
            // 0x25493c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254938) {
            ctx->pc = 0x254970u;
            goto label_254970;
        }
    }
    ctx->pc = 0x254940u;
label_254940:
    // 0x254940: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254940u;
    SET_GPR_U32(ctx, 31, 0x254948u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254948u; }
        if (ctx->pc != 0x254948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254948u; }
        if (ctx->pc != 0x254948u) { return; }
    }
    ctx->pc = 0x254948u;
label_254948:
    // 0x254948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25494c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25494Cu;
    SET_GPR_U32(ctx, 31, 0x254954u);
    ctx->pc = 0x254950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25494Cu;
            // 0x254950: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254954u; }
        if (ctx->pc != 0x254954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254954u; }
        if (ctx->pc != 0x254954u) { return; }
    }
    ctx->pc = 0x254954u;
label_254954:
    // 0x254954: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x254954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x254958: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x254958u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25495c: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x25495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
    // 0x254960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254964: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x254964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254968: 0xac621b14  sw          $v0, 0x1B14($v1)
    ctx->pc = 0x254968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6932), GPR_U32(ctx, 2));
    // 0x25496c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254970:
    // 0x254970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254978: 0x3e00008  jr          $ra
    ctx->pc = 0x254978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25497Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254978u;
            // 0x25497c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254980u;
}
