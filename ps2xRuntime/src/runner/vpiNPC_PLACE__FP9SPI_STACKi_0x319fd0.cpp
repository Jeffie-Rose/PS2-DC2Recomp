#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiNPC_PLACE__FP9SPI_STACKi
// Address: 0x319fd0 - 0x31a024
void vpiNPC_PLACE__FP9SPI_STACKi_0x319fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiNPC_PLACE__FP9SPI_STACKi_0x319fd0");
#endif

    switch (ctx->pc) {
        case 0x319fe4u: goto label_319fe4;
        case 0x319ff0u: goto label_319ff0;
        default: break;
    }

    ctx->pc = 0x319fd0u;

    // 0x319fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319fdc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319FDCu;
    SET_GPR_U32(ctx, 31, 0x319FE4u);
    ctx->pc = 0x319FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319FDCu;
            // 0x319fe0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319FE4u; }
        if (ctx->pc != 0x319FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319FE4u; }
        if (ctx->pc != 0x319FE4u) { return; }
    }
    ctx->pc = 0x319FE4u;
label_319fe4:
    // 0x319fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319fe8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319FE8u;
    SET_GPR_U32(ctx, 31, 0x319FF0u);
    ctx->pc = 0x319FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319FE8u;
            // 0x319fec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319FF0u; }
        if (ctx->pc != 0x319FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319FF0u; }
        if (ctx->pc != 0x319FF0u) { return; }
    }
    ctx->pc = 0x319FF0u;
label_319ff0:
    // 0x319ff0: 0x8f83a334  lw          $v1, -0x5CCC($gp)
    ctx->pc = 0x319ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943540)));
    // 0x319ff4: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x319ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x319ff8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x319ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x319ffc: 0xaf83a374  sw          $v1, -0x5C8C($gp)
    ctx->pc = 0x319ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943604), GPR_U32(ctx, 3));
    // 0x31a000: 0x8f83a374  lw          $v1, -0x5C8C($gp)
    ctx->pc = 0x31a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a004: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x31a004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x31a008: 0x8f83a374  lw          $v1, -0x5C8C($gp)
    ctx->pc = 0x31a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a010: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x31a010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x31a014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a01c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A01Cu;
            // 0x31a020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A024u;
}
