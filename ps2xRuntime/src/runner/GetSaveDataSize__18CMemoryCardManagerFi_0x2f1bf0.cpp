#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSaveDataSize__18CMemoryCardManagerFi
// Address: 0x2f1bf0 - 0x2f1cf8
void GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0");
#endif

    switch (ctx->pc) {
        case 0x2f1c18u: goto label_2f1c18;
        case 0x2f1c54u: goto label_2f1c54;
        case 0x2f1c6cu: goto label_2f1c6c;
        case 0x2f1c90u: goto label_2f1c90;
        case 0x2f1cc4u: goto label_2f1cc4;
        case 0x2f1ce0u: goto label_2f1ce0;
        default: break;
    }

    ctx->pc = 0x2f1bf0u;

    // 0x2f1bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f1bf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f1bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1c04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f1c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c08: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1C08u;
    {
        const bool branch_taken_0x2f1c08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C08u;
            // 0x2f1c0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c08) {
            ctx->pc = 0x2F1C20u;
            goto label_2f1c20;
        }
    }
    ctx->pc = 0x2F1C10u;
    // 0x2f1c10: 0xc0bc6e4  jal         func_2F1B90
    ctx->pc = 0x2F1C10u;
    SET_GPR_U32(ctx, 31, 0x2F1C18u);
    ctx->pc = 0x2F1B90u;
    if (runtime->hasFunction(0x2F1B90u)) {
        auto targetFn = runtime->lookupFunction(0x2F1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C18u; }
        if (ctx->pc != 0x2F1C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C18u; }
        if (ctx->pc != 0x2F1C18u) { return; }
    }
    ctx->pc = 0x2F1C18u;
label_2f1c18:
    // 0x2f1c18: 0x2442019a  addiu       $v0, $v0, 0x19A
    ctx->pc = 0x2f1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 410));
    // 0x2f1c1c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x2f1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_2f1c20:
    // 0x2f1c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1c24: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1C24u;
    {
        const bool branch_taken_0x2f1c24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C24u;
            // 0x2f1c28: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c24) {
            ctx->pc = 0x2F1C34u;
            goto label_2f1c34;
        }
    }
    ctx->pc = 0x2F1C2Cu;
    // 0x2f1c2c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f1c30: 0x344259c0  ori         $v0, $v0, 0x59C0
    ctx->pc = 0x2f1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22976);
label_2f1c34:
    // 0x2f1c34: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1C34u;
    {
        const bool branch_taken_0x2f1c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C34u;
            // 0x2f1c38: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c34) {
            ctx->pc = 0x2F1C44u;
            goto label_2f1c44;
        }
    }
    ctx->pc = 0x2F1C3Cu;
    // 0x2f1c3c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f1c40: 0x34424cb0  ori         $v0, $v0, 0x4CB0
    ctx->pc = 0x2f1c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19632);
label_2f1c44:
    // 0x2f1c44: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1C44u;
    {
        const bool branch_taken_0x2f1c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C44u;
            // 0x2f1c48: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c44) {
            ctx->pc = 0x2F1C5Cu;
            goto label_2f1c5c;
        }
    }
    ctx->pc = 0x2F1C4Cu;
    // 0x2f1c4c: 0xc0bc6e4  jal         func_2F1B90
    ctx->pc = 0x2F1C4Cu;
    SET_GPR_U32(ctx, 31, 0x2F1C54u);
    ctx->pc = 0x2F1C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C4Cu;
            // 0x2f1c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B90u;
    if (runtime->hasFunction(0x2F1B90u)) {
        auto targetFn = runtime->lookupFunction(0x2F1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C54u; }
        if (ctx->pc != 0x2F1C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C54u; }
        if (ctx->pc != 0x2F1C54u) { return; }
    }
    ctx->pc = 0x2F1C54u;
label_2f1c54:
    // 0x2f1c54: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x2f1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2f1c58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f1c5c:
    // 0x2f1c5c: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F1C5Cu;
    {
        const bool branch_taken_0x2f1c5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C5Cu;
            // 0x2f1c60: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c5c) {
            ctx->pc = 0x2F1C80u;
            goto label_2f1c80;
        }
    }
    ctx->pc = 0x2F1C64u;
    // 0x2f1c64: 0xc0bc6e4  jal         func_2F1B90
    ctx->pc = 0x2F1C64u;
    SET_GPR_U32(ctx, 31, 0x2F1C6Cu);
    ctx->pc = 0x2F1C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C64u;
            // 0x2f1c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B90u;
    if (runtime->hasFunction(0x2F1B90u)) {
        auto targetFn = runtime->lookupFunction(0x2F1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C6Cu; }
        if (ctx->pc != 0x2F1C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C6Cu; }
        if (ctx->pc != 0x2F1C6Cu) { return; }
    }
    ctx->pc = 0x2F1C6Cu;
label_2f1c6c:
    // 0x2f1c6c: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x2f1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2f1c70: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f1c74: 0x344254b0  ori         $v0, $v0, 0x54B0
    ctx->pc = 0x2f1c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21680);
    // 0x2f1c78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f1c7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f1c80:
    // 0x2f1c80: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1C80u;
    {
        const bool branch_taken_0x2f1c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C80u;
            // 0x2f1c84: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c80) {
            ctx->pc = 0x2F1C98u;
            goto label_2f1c98;
        }
    }
    ctx->pc = 0x2F1C88u;
    // 0x2f1c88: 0xc0bc6e4  jal         func_2F1B90
    ctx->pc = 0x2F1C88u;
    SET_GPR_U32(ctx, 31, 0x2F1C90u);
    ctx->pc = 0x2F1C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C88u;
            // 0x2f1c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B90u;
    if (runtime->hasFunction(0x2F1B90u)) {
        auto targetFn = runtime->lookupFunction(0x2F1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C90u; }
        if (ctx->pc != 0x2F1C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C90u; }
        if (ctx->pc != 0x2F1C90u) { return; }
    }
    ctx->pc = 0x2F1C90u;
label_2f1c90:
    // 0x2f1c90: 0x24420199  addiu       $v0, $v0, 0x199
    ctx->pc = 0x2f1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 409));
    // 0x2f1c94: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f1c98:
    // 0x2f1c98: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1C98u;
    {
        const bool branch_taken_0x2f1c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1C98u;
            // 0x2f1c9c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c98) {
            ctx->pc = 0x2F1CA8u;
            goto label_2f1ca8;
        }
    }
    ctx->pc = 0x2F1CA0u;
    // 0x2f1ca0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2f1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2f1ca4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2f1ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_2f1ca8:
    // 0x2f1ca8: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1CA8u;
    {
        const bool branch_taken_0x2f1ca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CA8u;
            // 0x2f1cac: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ca8) {
            ctx->pc = 0x2F1CB4u;
            goto label_2f1cb4;
        }
    }
    ctx->pc = 0x2F1CB0u;
    // 0x2f1cb0: 0x24025470  addiu       $v0, $zero, 0x5470
    ctx->pc = 0x2f1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21616));
label_2f1cb4:
    // 0x2f1cb4: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1CB4u;
    {
        const bool branch_taken_0x2f1cb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CB4u;
            // 0x2f1cb8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cb4) {
            ctx->pc = 0x2F1CD0u;
            goto label_2f1cd0;
        }
    }
    ctx->pc = 0x2F1CBCu;
    // 0x2f1cbc: 0xc0bc6e4  jal         func_2F1B90
    ctx->pc = 0x2F1CBCu;
    SET_GPR_U32(ctx, 31, 0x2F1CC4u);
    ctx->pc = 0x2F1CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CBCu;
            // 0x2f1cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B90u;
    if (runtime->hasFunction(0x2F1B90u)) {
        auto targetFn = runtime->lookupFunction(0x2F1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1CC4u; }
        if (ctx->pc != 0x2F1CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1CC4u; }
        if (ctx->pc != 0x2F1CC4u) { return; }
    }
    ctx->pc = 0x2F1CC4u;
label_2f1cc4:
    // 0x2f1cc4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x2f1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2f1cc8: 0x24425c70  addiu       $v0, $v0, 0x5C70
    ctx->pc = 0x2f1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23664));
    // 0x2f1ccc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f1cd0:
    // 0x2f1cd0: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1CD0u;
    {
        const bool branch_taken_0x2f1cd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CD0u;
            // 0x2f1cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cd0) {
            ctx->pc = 0x2F1CE4u;
            goto label_2f1ce4;
        }
    }
    ctx->pc = 0x2F1CD8u;
    // 0x2f1cd8: 0xc0bc6e4  jal         func_2F1B90
    ctx->pc = 0x2F1CD8u;
    SET_GPR_U32(ctx, 31, 0x2F1CE0u);
    ctx->pc = 0x2F1B90u;
    if (runtime->hasFunction(0x2F1B90u)) {
        auto targetFn = runtime->lookupFunction(0x2F1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1CE0u; }
        if (ctx->pc != 0x2F1CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1CE0u; }
        if (ctx->pc != 0x2F1CE0u) { return; }
    }
    ctx->pc = 0x2F1CE0u;
label_2f1ce0:
    // 0x2f1ce0: 0x2442001b  addiu       $v0, $v0, 0x1B
    ctx->pc = 0x2f1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27));
label_2f1ce4:
    // 0x2f1ce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f1ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1CF0u;
            // 0x2f1cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1CF8u;
}
