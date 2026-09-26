#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefEventSeFile__6CSceneFiPc
// Address: 0x2a6cf0 - 0x2a6d64
void GetDefEventSeFile__6CSceneFiPc_0x2a6cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefEventSeFile__6CSceneFiPc_0x2a6cf0");
#endif

    switch (ctx->pc) {
        case 0x2a6d08u: goto label_2a6d08;
        case 0x2a6d28u: goto label_2a6d28;
        case 0x2a6d34u: goto label_2a6d34;
        case 0x2a6d4cu: goto label_2a6d4c;
        default: break;
    }

    ctx->pc = 0x2a6cf0u;

    // 0x2a6cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a6cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a6cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6cfc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a6cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d00: 0xc0a9b0c  jal         func_2A6C30
    ctx->pc = 0x2A6D00u;
    SET_GPR_U32(ctx, 31, 0x2A6D08u);
    ctx->pc = 0x2A6D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6D00u;
            // 0x2a6d04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C30u;
    if (runtime->hasFunction(0x2A6C30u)) {
        auto targetFn = runtime->lookupFunction(0x2A6C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D08u; }
        if (ctx->pc != 0x2A6D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSndDataID__6CSceneFi_0x2a6c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D08u; }
        if (ctx->pc != 0x2A6D08u) { return; }
    }
    ctx->pc = 0x2A6D08u;
label_2a6d08:
    // 0x2a6d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d0c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6D0Cu;
    {
        const bool branch_taken_0x2a6d0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6D0Cu;
            // 0x2a6d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d0c) {
            ctx->pc = 0x2A6D1Cu;
            goto label_2a6d1c;
        }
    }
    ctx->pc = 0x2A6D14u;
    // 0x2a6d14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A6D14u;
    {
        const bool branch_taken_0x2a6d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6D14u;
            // 0x2a6d18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d14) {
            ctx->pc = 0x2A6D54u;
            goto label_2a6d54;
        }
    }
    ctx->pc = 0x2A6D1Cu;
label_2a6d1c:
    // 0x2a6d1c: 0x8605001e  lh          $a1, 0x1E($s0)
    ctx->pc = 0x2a6d1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2a6d20: 0xc0a9a50  jal         func_2A6940
    ctx->pc = 0x2A6D20u;
    SET_GPR_U32(ctx, 31, 0x2A6D28u);
    ctx->pc = 0x2A6D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6D20u;
            // 0x2a6d24: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6940u;
    if (runtime->hasFunction(0x2A6940u)) {
        auto targetFn = runtime->lookupFunction(0x2A6940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D28u; }
        if (ctx->pc != 0x2A6D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumber3__FPci_0x2a6940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D28u; }
        if (ctx->pc != 0x2A6D28u) { return; }
    }
    ctx->pc = 0x2A6D28u;
label_2a6d28:
    // 0x2a6d28: 0x86050020  lh          $a1, 0x20($s0)
    ctx->pc = 0x2a6d28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6d2c: 0xc0a9a50  jal         func_2A6940
    ctx->pc = 0x2A6D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A6D34u);
    ctx->pc = 0x2A6D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6D2Cu;
            // 0x2a6d30: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6940u;
    if (runtime->hasFunction(0x2A6940u)) {
        auto targetFn = runtime->lookupFunction(0x2A6940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D34u; }
        if (ctx->pc != 0x2A6D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumber3__FPci_0x2a6940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D34u; }
        if (ctx->pc != 0x2A6D34u) { return; }
    }
    ctx->pc = 0x2A6D34u;
label_2a6d34:
    // 0x2a6d34: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a6d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a6d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d3c: 0x24a5e5c0  addiu       $a1, $a1, -0x1A40
    ctx->pc = 0x2a6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960576));
    // 0x2a6d40: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a6d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a6d44: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2A6D44u;
    SET_GPR_U32(ctx, 31, 0x2A6D4Cu);
    ctx->pc = 0x2A6D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6D44u;
            // 0x2a6d48: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D4Cu; }
        if (ctx->pc != 0x2A6D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D4Cu; }
        if (ctx->pc != 0x2A6D4Cu) { return; }
    }
    ctx->pc = 0x2A6D4Cu;
label_2a6d4c:
    // 0x2a6d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6d50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a6d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a6d54:
    // 0x2a6d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6D5Cu;
            // 0x2a6d60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6D64u;
}
