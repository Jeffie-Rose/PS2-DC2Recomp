#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _POLY_NUM__FP9SPI_STACKi
// Address: 0x175910 - 0x175990
void ps2__POLY_NUM__FP9SPI_STACKi_0x175910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__POLY_NUM__FP9SPI_STACKi_0x175910");
#endif

    switch (ctx->pc) {
        case 0x175944u: goto label_175944;
        case 0x175968u: goto label_175968;
        default: break;
    }

    ctx->pc = 0x175910u;

    // 0x175910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x175918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17591c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x175920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175924: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175928: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17592c: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x17592cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x175930: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175934: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x175934u;
    {
        const bool branch_taken_0x175934 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x175938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175934u;
            // 0x175938: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175934) {
            ctx->pc = 0x175954u;
            goto label_175954;
        }
    }
    ctx->pc = 0x17593Cu;
    // 0x17593c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17593Cu;
    SET_GPR_U32(ctx, 31, 0x175944u);
    ctx->pc = 0x175940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17593Cu;
            // 0x175940: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175944u; }
        if (ctx->pc != 0x175944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175944u; }
        if (ctx->pc != 0x175944u) { return; }
    }
    ctx->pc = 0x175944u;
label_175944:
    // 0x175944: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x175944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175948: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x175948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x17594c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175950: 0xac820104  sw          $v0, 0x104($a0)
    ctx->pc = 0x175950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 2));
label_175954:
    // 0x175954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x175954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175958: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x175958u;
    {
        const bool branch_taken_0x175958 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175958u;
            // 0x17595c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175958) {
            ctx->pc = 0x175978u;
            goto label_175978;
        }
    }
    ctx->pc = 0x175960u;
    // 0x175960: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x175960u;
    SET_GPR_U32(ctx, 31, 0x175968u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175968u; }
        if (ctx->pc != 0x175968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175968u; }
        if (ctx->pc != 0x175968u) { return; }
    }
    ctx->pc = 0x175968u;
label_175968:
    // 0x175968: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x17596c: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x17596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x175970: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x175970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175974: 0xac820108  sw          $v0, 0x108($a0)
    ctx->pc = 0x175974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 2));
label_175978:
    // 0x175978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17597c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175988: 0x3e00008  jr          $ra
    ctx->pc = 0x175988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175988u;
            // 0x17598c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175990u;
}
