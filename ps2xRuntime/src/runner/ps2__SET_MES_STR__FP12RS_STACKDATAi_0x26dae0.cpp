#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_STR__FP12RS_STACKDATAi
// Address: 0x26dae0 - 0x26db60
void ps2__SET_MES_STR__FP12RS_STACKDATAi_0x26dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_STR__FP12RS_STACKDATAi_0x26dae0");
#endif

    switch (ctx->pc) {
        case 0x26daf8u: goto label_26daf8;
        case 0x26db00u: goto label_26db00;
        case 0x26db1cu: goto label_26db1c;
        case 0x26db28u: goto label_26db28;
        case 0x26db48u: goto label_26db48;
        default: break;
    }

    ctx->pc = 0x26dae0u;

    // 0x26dae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26dae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26dae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26daec: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26daecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26daf0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26DAF0u;
    SET_GPR_U32(ctx, 31, 0x26DAF8u);
    ctx->pc = 0x26DAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAF0u;
            // 0x26daf4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAF8u; }
        if (ctx->pc != 0x26DAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAF8u; }
        if (ctx->pc != 0x26DAF8u) { return; }
    }
    ctx->pc = 0x26DAF8u;
label_26daf8:
    // 0x26daf8: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26DAF8u;
    SET_GPR_U32(ctx, 31, 0x26DB00u);
    ctx->pc = 0x26DAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAF8u;
            // 0x26dafc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB00u; }
        if (ctx->pc != 0x26DB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB00u; }
        if (ctx->pc != 0x26DB00u) { return; }
    }
    ctx->pc = 0x26DB00u;
label_26db00:
    // 0x26db00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26db00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db04: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DB04u;
    {
        const bool branch_taken_0x26db04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB04u;
            // 0x26db08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db04) {
            ctx->pc = 0x26DB14u;
            goto label_26db14;
        }
    }
    ctx->pc = 0x26DB0Cu;
    // 0x26db0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26DB0Cu;
    {
        const bool branch_taken_0x26db0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB0Cu;
            // 0x26db10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db0c) {
            ctx->pc = 0x26DB4Cu;
            goto label_26db4c;
        }
    }
    ctx->pc = 0x26DB14u;
label_26db14:
    // 0x26db14: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26DB14u;
    SET_GPR_U32(ctx, 31, 0x26DB1Cu);
    ctx->pc = 0x26DB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB14u;
            // 0x26db18: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB1Cu; }
        if (ctx->pc != 0x26DB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB1Cu; }
        if (ctx->pc != 0x26DB1Cu) { return; }
    }
    ctx->pc = 0x26DB1Cu;
label_26db1c:
    // 0x26db1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db20: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26DB20u;
    SET_GPR_U32(ctx, 31, 0x26DB28u);
    ctx->pc = 0x26DB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB20u;
            // 0x26db24: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB28u; }
        if (ctx->pc != 0x26DB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB28u; }
        if (ctx->pc != 0x26DB28u) { return; }
    }
    ctx->pc = 0x26DB28u;
label_26db28:
    // 0x26db28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DB28u;
    {
        const bool branch_taken_0x26db28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db28) {
            ctx->pc = 0x26DB48u;
            goto label_26db48;
        }
    }
    ctx->pc = 0x26DB30u;
    // 0x26db30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26db34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26db34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db38: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x26db38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26db3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26db40: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x26DB40u;
    SET_GPR_U32(ctx, 31, 0x26DB48u);
    ctx->pc = 0x26DB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB40u;
            // 0x26db44: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB48u; }
        if (ctx->pc != 0x26DB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB48u; }
        if (ctx->pc != 0x26DB48u) { return; }
    }
    ctx->pc = 0x26DB48u;
label_26db48:
    // 0x26db48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26db48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26db4c:
    // 0x26db4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26db4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26db50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26db50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26db54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26db54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26db58: 0x3e00008  jr          $ra
    ctx->pc = 0x26DB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB58u;
            // 0x26db5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26DB60u;
}
