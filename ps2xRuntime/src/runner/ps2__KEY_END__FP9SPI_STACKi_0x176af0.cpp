#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _KEY_END__FP9SPI_STACKi
// Address: 0x176af0 - 0x176b94
void ps2__KEY_END__FP9SPI_STACKi_0x176af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__KEY_END__FP9SPI_STACKi_0x176af0");
#endif

    switch (ctx->pc) {
        case 0x176b84u: goto label_176b84;
        default: break;
    }

    ctx->pc = 0x176af0u;

    // 0x176af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176af8: 0x8f8289b8  lw          $v0, -0x7648($gp)
    ctx->pc = 0x176af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176afc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176AFCu;
    {
        const bool branch_taken_0x176afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176afc) {
            ctx->pc = 0x176B0Cu;
            goto label_176b0c;
        }
    }
    ctx->pc = 0x176B04u;
    // 0x176b04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x176B04u;
    {
        const bool branch_taken_0x176b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B04u;
            // 0x176b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b04) {
            ctx->pc = 0x176B88u;
            goto label_176b88;
        }
    }
    ctx->pc = 0x176B0Cu;
label_176b0c:
    // 0x176b0c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x176b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x176b10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x176b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176b14: 0x8f8289b8  lw          $v0, -0x7648($gp)
    ctx->pc = 0x176b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176b18: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x176b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x176b1c: 0x8f8289b8  lw          $v0, -0x7648($gp)
    ctx->pc = 0x176b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176b20: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x176b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x176b24: 0x8f8289b8  lw          $v0, -0x7648($gp)
    ctx->pc = 0x176b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176b28: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x176b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x176b2c: 0x8f8489b8  lw          $a0, -0x7648($gp)
    ctx->pc = 0x176b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176b30: 0x8f8289b4  lw          $v0, -0x764C($gp)
    ctx->pc = 0x176b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x176b34: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x176b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176b38: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x176b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x176b3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176b40: 0xaf8489b8  sw          $a0, -0x7648($gp)
    ctx->pc = 0x176b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 4));
    // 0x176b44: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x176b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b48: 0x8c620530  lw          $v0, 0x530($v1)
    ctx->pc = 0x176b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1328)));
    // 0x176b4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176b50: 0xac620530  sw          $v0, 0x530($v1)
    ctx->pc = 0x176b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1328), GPR_U32(ctx, 2));
    // 0x176b54: 0x8f8289b4  lw          $v0, -0x764C($gp)
    ctx->pc = 0x176b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x176b58: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176b5c: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x176b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x176b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b68: 0x8c430530  lw          $v1, 0x530($v0)
    ctx->pc = 0x176b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1328)));
    // 0x176b6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x176b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176b70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176b74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176b78: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x176b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x176b7c: 0xc04e704  jal         func_139C10
    ctx->pc = 0x176B7Cu;
    SET_GPR_U32(ctx, 31, 0x176B84u);
    ctx->pc = 0x176B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B7Cu;
            // 0x176b80: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B84u; }
        if (ctx->pc != 0x176B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B84u; }
        if (ctx->pc != 0x176B84u) { return; }
    }
    ctx->pc = 0x176B84u;
label_176b84:
    // 0x176b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176b88:
    // 0x176b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x176B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B8Cu;
            // 0x176b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176B94u;
}
