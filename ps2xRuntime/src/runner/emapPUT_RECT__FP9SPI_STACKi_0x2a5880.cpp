#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPUT_RECT__FP9SPI_STACKi
// Address: 0x2a5880 - 0x2a58bc
void emapPUT_RECT__FP9SPI_STACKi_0x2a5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPUT_RECT__FP9SPI_STACKi_0x2a5880");
#endif

    switch (ctx->pc) {
        case 0x2a58a4u: goto label_2a58a4;
        default: break;
    }

    ctx->pc = 0x2a5880u;

    // 0x2a5880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5888: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a588c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A588Cu;
    {
        const bool branch_taken_0x2a588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A588Cu;
            // 0x2a5890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a588c) {
            ctx->pc = 0x2A589Cu;
            goto label_2a589c;
        }
    }
    ctx->pc = 0x2A5894u;
    // 0x2a5894: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5894u;
    {
        const bool branch_taken_0x2a5894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5894u;
            // 0x2a5898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5894) {
            ctx->pc = 0x2A58B4u;
            goto label_2a58b4;
        }
    }
    ctx->pc = 0x2A589Cu;
label_2a589c:
    // 0x2a589c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A589Cu;
    SET_GPR_U32(ctx, 31, 0x2A58A4u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A58A4u; }
        if (ctx->pc != 0x2A58A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A58A4u; }
        if (ctx->pc != 0x2A58A4u) { return; }
    }
    ctx->pc = 0x2A58A4u;
label_2a58a4:
    // 0x2a58a4: 0xaf829a70  sw          $v0, -0x6590($gp)
    ctx->pc = 0x2a58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 2));
    // 0x2a58a8: 0xaf809a74  sw          $zero, -0x658C($gp)
    ctx->pc = 0x2a58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 0));
    // 0x2a58ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a58b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a58b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a58b4:
    // 0x2a58b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A58B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A58B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A58B4u;
            // 0x2a58b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A58BCu;
}
