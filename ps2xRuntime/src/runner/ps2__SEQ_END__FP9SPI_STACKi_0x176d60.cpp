#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SEQ_END__FP9SPI_STACKi
// Address: 0x176d60 - 0x176dfc
void ps2__SEQ_END__FP9SPI_STACKi_0x176d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SEQ_END__FP9SPI_STACKi_0x176d60");
#endif

    switch (ctx->pc) {
        case 0x176decu: goto label_176dec;
        default: break;
    }

    ctx->pc = 0x176d60u;

    // 0x176d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176d68: 0x8f8289e8  lw          $v0, -0x7618($gp)
    ctx->pc = 0x176d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x176d6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176D6Cu;
    {
        const bool branch_taken_0x176d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D6Cu;
            // 0x176d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d6c) {
            ctx->pc = 0x176D7Cu;
            goto label_176d7c;
        }
    }
    ctx->pc = 0x176D74u;
    // 0x176d74: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x176D74u;
    {
        const bool branch_taken_0x176d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D74u;
            // 0x176d78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d74) {
            ctx->pc = 0x176DF4u;
            goto label_176df4;
        }
    }
    ctx->pc = 0x176D7Cu;
label_176d7c:
    // 0x176d7c: 0x8f8289c0  lw          $v0, -0x7640($gp)
    ctx->pc = 0x176d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176d80: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x176d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x176d84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x176d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176d88: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x176d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x176d8c: 0x8f8289c0  lw          $v0, -0x7640($gp)
    ctx->pc = 0x176d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176d90: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x176d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x176d94: 0x8f8289c0  lw          $v0, -0x7640($gp)
    ctx->pc = 0x176d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176d98: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x176d98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x176d9c: 0x8f8289c0  lw          $v0, -0x7640($gp)
    ctx->pc = 0x176d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176da0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x176da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x176da4: 0x8f8289c0  lw          $v0, -0x7640($gp)
    ctx->pc = 0x176da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176da8: 0x8f8389bc  lw          $v1, -0x7644($gp)
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176dac: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x176db0: 0xaf8289c0  sw          $v0, -0x7640($gp)
    ctx->pc = 0x176db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937024), GPR_U32(ctx, 2));
    // 0x176db4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x176db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x176db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176dbc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x176dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x176dc0: 0x8f8289bc  lw          $v0, -0x7644($gp)
    ctx->pc = 0x176dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176dc4: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x176dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x176dc8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x176dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x176dcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x176dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176dd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x176dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x176dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176ddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176de0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x176de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176de4: 0xc04e704  jal         func_139C10
    ctx->pc = 0x176DE4u;
    SET_GPR_U32(ctx, 31, 0x176DECu);
    ctx->pc = 0x176DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176DE4u;
            // 0x176de8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DECu; }
        if (ctx->pc != 0x176DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DECu; }
        if (ctx->pc != 0x176DECu) { return; }
    }
    ctx->pc = 0x176DECu;
label_176dec:
    // 0x176dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176df4:
    // 0x176df4: 0x3e00008  jr          $ra
    ctx->pc = 0x176DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DF4u;
            // 0x176df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176DFCu;
}
