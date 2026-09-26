#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_COMMAND_NAME__FP9SPI_STACKi
// Address: 0x253ed0 - 0x253f10
void ps2__MENU_EXE_COMMAND_NAME__FP9SPI_STACKi_0x253ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_COMMAND_NAME__FP9SPI_STACKi_0x253ed0");
#endif

    switch (ctx->pc) {
        case 0x253ee0u: goto label_253ee0;
        case 0x253ef4u: goto label_253ef4;
        default: break;
    }

    ctx->pc = 0x253ed0u;

    // 0x253ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253ed8: 0xc05191c  jal         func_146470
    ctx->pc = 0x253ED8u;
    SET_GPR_U32(ctx, 31, 0x253EE0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EE0u; }
        if (ctx->pc != 0x253EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EE0u; }
        if (ctx->pc != 0x253EE0u) { return; }
    }
    ctx->pc = 0x253EE0u;
label_253ee0:
    // 0x253ee0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x253ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x253ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ee8: 0x2484e360  addiu       $a0, $a0, -0x1CA0
    ctx->pc = 0x253ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959968));
    // 0x253eec: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x253EECu;
    SET_GPR_U32(ctx, 31, 0x253EF4u);
    ctx->pc = 0x253EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253EECu;
            // 0x253ef0: 0xa38097d8  sb          $zero, -0x6828($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940632), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EF4u; }
        if (ctx->pc != 0x253EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EF4u; }
        if (ctx->pc != 0x253EF4u) { return; }
    }
    ctx->pc = 0x253EF4u;
label_253ef4:
    // 0x253ef4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x253EF4u;
    {
        const bool branch_taken_0x253ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253EF4u;
            // 0x253ef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ef4) {
            ctx->pc = 0x253F00u;
            goto label_253f00;
        }
    }
    ctx->pc = 0x253EFCu;
    // 0x253efc: 0xa38297d8  sb          $v0, -0x6828($gp)
    ctx->pc = 0x253efcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940632), (uint8_t)GPR_U32(ctx, 2));
label_253f00:
    // 0x253f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f08: 0x3e00008  jr          $ra
    ctx->pc = 0x253F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F08u;
            // 0x253f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253F10u;
}
