#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: niNIGHT_PLACE__FP9SPI_STACKi
// Address: 0x319b70 - 0x319bd0
void niNIGHT_PLACE__FP9SPI_STACKi_0x319b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("niNIGHT_PLACE__FP9SPI_STACKi_0x319b70");
#endif

    switch (ctx->pc) {
        case 0x319b80u: goto label_319b80;
        default: break;
    }

    ctx->pc = 0x319b70u;

    // 0x319b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319b78: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319B78u;
    SET_GPR_U32(ctx, 31, 0x319B80u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319B80u; }
        if (ctx->pc != 0x319B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319B80u; }
        if (ctx->pc != 0x319B80u) { return; }
    }
    ctx->pc = 0x319B80u;
label_319b80:
    // 0x319b80: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319B80u;
    {
        const bool branch_taken_0x319b80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x319b80) {
            ctx->pc = 0x319B98u;
            goto label_319b98;
        }
    }
    ctx->pc = 0x319B88u;
    // 0x319b88: 0x8f83a368  lw          $v1, -0x5C98($gp)
    ctx->pc = 0x319b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943592)));
    // 0x319b8c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x319b8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x319b90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319B90u;
    {
        const bool branch_taken_0x319b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x319b90) {
            ctx->pc = 0x319BA0u;
            goto label_319ba0;
        }
    }
    ctx->pc = 0x319B98u;
label_319b98:
    // 0x319b98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319B98u;
    {
        const bool branch_taken_0x319b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319B98u;
            // 0x319b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b98) {
            ctx->pc = 0x319BC4u;
            goto label_319bc4;
        }
    }
    ctx->pc = 0x319BA0u;
label_319ba0:
    // 0x319ba0: 0x8f83a354  lw          $v1, -0x5CAC($gp)
    ctx->pc = 0x319ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943572)));
    // 0x319ba4: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x319ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x319ba8: 0x8f85a364  lw          $a1, -0x5C9C($gp)
    ctx->pc = 0x319ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943588)));
    // 0x319bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319bb0: 0x8f84a360  lw          $a0, -0x5CA0($gp)
    ctx->pc = 0x319bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943584)));
    // 0x319bb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x319bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x319bb8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x319bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x319bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x319bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x319bc0: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x319bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_319bc4:
    // 0x319bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x319BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319BC8u;
            // 0x319bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319BD0u;
}
