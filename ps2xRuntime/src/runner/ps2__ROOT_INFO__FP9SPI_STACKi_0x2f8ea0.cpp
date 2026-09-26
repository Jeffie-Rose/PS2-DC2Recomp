#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOT_INFO__FP9SPI_STACKi
// Address: 0x2f8ea0 - 0x2f8ef4
void ps2__ROOT_INFO__FP9SPI_STACKi_0x2f8ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOT_INFO__FP9SPI_STACKi_0x2f8ea0");
#endif

    switch (ctx->pc) {
        case 0x2f8eb4u: goto label_2f8eb4;
        case 0x2f8ec8u: goto label_2f8ec8;
        case 0x2f8ed8u: goto label_2f8ed8;
        default: break;
    }

    ctx->pc = 0x2f8ea0u;

    // 0x2f8ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f8ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f8ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f8ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f8eac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8EACu;
    SET_GPR_U32(ctx, 31, 0x2F8EB4u);
    ctx->pc = 0x2F8EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8EACu;
            // 0x2f8eb0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EB4u; }
        if (ctx->pc != 0x2F8EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EB4u; }
        if (ctx->pc != 0x2F8EB4u) { return; }
    }
    ctx->pc = 0x2F8EB4u;
label_2f8eb4:
    // 0x2f8eb4: 0x8f839f58  lw          $v1, -0x60A8($gp)
    ctx->pc = 0x2f8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942552)));
    // 0x2f8eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ebc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x2f8ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f8ec0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8EC0u;
    SET_GPR_U32(ctx, 31, 0x2F8EC8u);
    ctx->pc = 0x2F8EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8EC0u;
            // 0x2f8ec4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EC8u; }
        if (ctx->pc != 0x2F8EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EC8u; }
        if (ctx->pc != 0x2F8EC8u) { return; }
    }
    ctx->pc = 0x2F8EC8u;
label_2f8ec8:
    // 0x2f8ec8: 0x8f839f58  lw          $v1, -0x60A8($gp)
    ctx->pc = 0x2f8ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942552)));
    // 0x2f8ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ed0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8ED0u;
    SET_GPR_U32(ctx, 31, 0x2F8ED8u);
    ctx->pc = 0x2F8ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8ED0u;
            // 0x2f8ed4: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8ED8u; }
        if (ctx->pc != 0x2F8ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8ED8u; }
        if (ctx->pc != 0x2F8ED8u) { return; }
    }
    ctx->pc = 0x2F8ED8u;
label_2f8ed8:
    // 0x2f8ed8: 0x8f839f58  lw          $v1, -0x60A8($gp)
    ctx->pc = 0x2f8ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942552)));
    // 0x2f8edc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2f8edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f8ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f8ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8EECu;
            // 0x2f8ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8EF4u;
}
