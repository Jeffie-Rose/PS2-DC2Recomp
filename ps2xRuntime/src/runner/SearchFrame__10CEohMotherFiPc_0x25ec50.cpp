#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchFrame__10CEohMotherFiPc
// Address: 0x25ec50 - 0x25ecb4
void SearchFrame__10CEohMotherFiPc_0x25ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFrame__10CEohMotherFiPc_0x25ec50");
#endif

    switch (ctx->pc) {
        case 0x25eca8u: goto label_25eca8;
        default: break;
    }

    ctx->pc = 0x25ec50u;

    // 0x25ec50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ec54: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EC54u;
    {
        const bool branch_taken_0x25ec54 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25EC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EC54u;
            // 0x25ec58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec54) {
            ctx->pc = 0x25EC68u;
            goto label_25ec68;
        }
    }
    ctx->pc = 0x25EC5Cu;
    // 0x25ec5c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25ec5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25ec60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EC60u;
    {
        const bool branch_taken_0x25ec60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EC60u;
            // 0x25ec64: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec60) {
            ctx->pc = 0x25EC70u;
            goto label_25ec70;
        }
    }
    ctx->pc = 0x25EC68u;
label_25ec68:
    // 0x25ec68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25EC68u;
    {
        const bool branch_taken_0x25ec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EC68u;
            // 0x25ec6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec68) {
            ctx->pc = 0x25ECA8u;
            goto label_25eca8;
        }
    }
    ctx->pc = 0x25EC70u;
label_25ec70:
    // 0x25ec70: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25ec74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ec78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EC78u;
    {
        const bool branch_taken_0x25ec78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EC78u;
            // 0x25ec7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec78) {
            ctx->pc = 0x25EC88u;
            goto label_25ec88;
        }
    }
    ctx->pc = 0x25EC80u;
    // 0x25ec80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25EC80u;
    {
        const bool branch_taken_0x25ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ec80) {
            ctx->pc = 0x25ECA8u;
            goto label_25eca8;
        }
    }
    ctx->pc = 0x25EC88u;
label_25ec88:
    // 0x25ec88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x25ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25ec8c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EC8Cu;
    {
        const bool branch_taken_0x25ec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ec8c) {
            ctx->pc = 0x25EC9Cu;
            goto label_25ec9c;
        }
    }
    ctx->pc = 0x25EC94u;
    // 0x25ec94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25EC94u;
    {
        const bool branch_taken_0x25ec94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EC94u;
            // 0x25ec98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec94) {
            ctx->pc = 0x25ECACu;
            goto label_25ecac;
        }
    }
    ctx->pc = 0x25EC9Cu;
label_25ec9c:
    // 0x25ec9c: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x25ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x25eca0: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x25ECA0u;
    SET_GPR_U32(ctx, 31, 0x25ECA8u);
    ctx->pc = 0x25ECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ECA0u;
            // 0x25eca4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ECA8u; }
        if (ctx->pc != 0x25ECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ECA8u; }
        if (ctx->pc != 0x25ECA8u) { return; }
    }
    ctx->pc = 0x25ECA8u;
label_25eca8:
    // 0x25eca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25eca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25ecac:
    // 0x25ecac: 0x3e00008  jr          $ra
    ctx->pc = 0x25ECACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ECB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ECACu;
            // 0x25ecb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25ECB4u;
}
