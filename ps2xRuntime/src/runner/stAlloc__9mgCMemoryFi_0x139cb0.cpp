#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: stAlloc__9mgCMemoryFi
// Address: 0x139cb0 - 0x139d20
void stAlloc__9mgCMemoryFi_0x139cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stAlloc__9mgCMemoryFi_0x139cb0");
#endif

    switch (ctx->pc) {
        case 0x139cfcu: goto label_139cfc;
        default: break;
    }

    ctx->pc = 0x139cb0u;

    // 0x139cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139cb8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x139cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139cbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139CBCu;
    {
        const bool branch_taken_0x139cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CBCu;
            // 0x139cc0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cbc) {
            ctx->pc = 0x139CCCu;
            goto label_139ccc;
        }
    }
    ctx->pc = 0x139CC4u;
    // 0x139cc4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x139CC4u;
    {
        const bool branch_taken_0x139cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CC4u;
            // 0x139cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cc4) {
            ctx->pc = 0x139D14u;
            goto label_139d14;
        }
    }
    ctx->pc = 0x139CCCu;
label_139ccc:
    // 0x139ccc: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139CCCu;
    {
        const bool branch_taken_0x139ccc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x139CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CCCu;
            // 0x139cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ccc) {
            ctx->pc = 0x139CDCu;
            goto label_139cdc;
        }
    }
    ctx->pc = 0x139CD4u;
    // 0x139cd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x139CD4u;
    {
        const bool branch_taken_0x139cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CD4u;
            // 0x139cd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cd4) {
            ctx->pc = 0x139D18u;
            goto label_139d18;
        }
    }
    ctx->pc = 0x139CDCu;
label_139cdc:
    // 0x139cdc: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x139cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x139ce0: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x139ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x139ce4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x139ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139ce8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x139ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x139cec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139CECu;
    {
        const bool branch_taken_0x139cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CECu;
            // 0x139cf0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cec) {
            ctx->pc = 0x139D04u;
            goto label_139d04;
        }
    }
    ctx->pc = 0x139CF4u;
    // 0x139cf4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x139CF4u;
    SET_GPR_U32(ctx, 31, 0x139CFCu);
    ctx->pc = 0x139CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139CF4u;
            // 0x139cf8: 0x248425b0  addiu       $a0, $a0, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CFCu; }
        if (ctx->pc != 0x139CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CFCu; }
        if (ctx->pc != 0x139CFCu) { return; }
    }
    ctx->pc = 0x139CFCu;
label_139cfc:
    // 0x139cfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139CFCu;
    {
        const bool branch_taken_0x139cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CFCu;
            // 0x139d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cfc) {
            ctx->pc = 0x139D14u;
            goto label_139d14;
        }
    }
    ctx->pc = 0x139D04u;
label_139d04:
    // 0x139d04: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x139d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x139d08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139d0c: 0xace50024  sw          $a1, 0x24($a3)
    ctx->pc = 0x139d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 5));
    // 0x139d10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_139d14:
    // 0x139d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139d18:
    // 0x139d18: 0x3e00008  jr          $ra
    ctx->pc = 0x139D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D18u;
            // 0x139d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139D20u;
}
