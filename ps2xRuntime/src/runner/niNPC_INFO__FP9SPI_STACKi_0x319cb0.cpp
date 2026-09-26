#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: niNPC_INFO__FP9SPI_STACKi
// Address: 0x319cb0 - 0x319df0
void niNPC_INFO__FP9SPI_STACKi_0x319cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("niNPC_INFO__FP9SPI_STACKi_0x319cb0");
#endif

    switch (ctx->pc) {
        case 0x319d00u: goto label_319d00;
        case 0x319d10u: goto label_319d10;
        case 0x319d24u: goto label_319d24;
        case 0x319d40u: goto label_319d40;
        case 0x319d5cu: goto label_319d5c;
        case 0x319d70u: goto label_319d70;
        case 0x319d8cu: goto label_319d8c;
        case 0x319da0u: goto label_319da0;
        case 0x319db8u: goto label_319db8;
        case 0x319dc4u: goto label_319dc4;
        default: break;
    }

    ctx->pc = 0x319cb0u;

    // 0x319cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x319cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x319cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x319cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x319cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x319cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x319cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x319cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x319cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319cc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x319cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319cc8: 0x8f85a36c  lw          $a1, -0x5C94($gp)
    ctx->pc = 0x319cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943596)));
    // 0x319ccc: 0x8f82a338  lw          $v0, -0x5CC8($gp)
    ctx->pc = 0x319cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943544)));
    // 0x319cd0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x319cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x319cd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319CD4u;
    {
        const bool branch_taken_0x319cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319CD4u;
            // 0x319cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cd4) {
            ctx->pc = 0x319CE4u;
            goto label_319ce4;
        }
    }
    ctx->pc = 0x319CDCu;
    // 0x319cdc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x319CDCu;
    {
        const bool branch_taken_0x319cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319CDCu;
            // 0x319ce0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cdc) {
            ctx->pc = 0x319DDCu;
            goto label_319ddc;
        }
    }
    ctx->pc = 0x319CE4u;
label_319ce4:
    // 0x319ce4: 0x8f82a33c  lw          $v0, -0x5CC4($gp)
    ctx->pc = 0x319ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943548)));
    // 0x319ce8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x319ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x319cec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x319cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x319cf0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x319cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x319cf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x319cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x319cf8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319CF8u;
    SET_GPR_U32(ctx, 31, 0x319D00u);
    ctx->pc = 0x319CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319CF8u;
            // 0x319cfc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D00u; }
        if (ctx->pc != 0x319D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D00u; }
        if (ctx->pc != 0x319D00u) { return; }
    }
    ctx->pc = 0x319D00u;
label_319d00:
    // 0x319d00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x319d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x319d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x319d08: 0xc05191c  jal         func_146470
    ctx->pc = 0x319D08u;
    SET_GPR_U32(ctx, 31, 0x319D10u);
    ctx->pc = 0x319D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319D08u;
            // 0x319d0c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D10u; }
        if (ctx->pc != 0x319D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D10u; }
        if (ctx->pc != 0x319D10u) { return; }
    }
    ctx->pc = 0x319D10u;
label_319d10:
    // 0x319d10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319D10u;
    {
        const bool branch_taken_0x319d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319d10) {
            ctx->pc = 0x319D28u;
            goto label_319d28;
        }
    }
    ctx->pc = 0x319D18u;
    // 0x319d18: 0x8f85a344  lw          $a1, -0x5CBC($gp)
    ctx->pc = 0x319d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943556)));
    // 0x319d1c: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x319D1Cu;
    SET_GPR_U32(ctx, 31, 0x319D24u);
    ctx->pc = 0x319D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319D1Cu;
            // 0x319d20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D24u; }
        if (ctx->pc != 0x319D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D24u; }
        if (ctx->pc != 0x319D24u) { return; }
    }
    ctx->pc = 0x319D24u;
label_319d24:
    // 0x319d24: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x319d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_319d28:
    // 0x319d28: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x319d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x319d2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319D2Cu;
    {
        const bool branch_taken_0x319d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319D2Cu;
            // 0x319d30: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d2c) {
            ctx->pc = 0x319D48u;
            goto label_319d48;
        }
    }
    ctx->pc = 0x319D34u;
    // 0x319d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x319d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d38: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319D38u;
    SET_GPR_U32(ctx, 31, 0x319D40u);
    ctx->pc = 0x319D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319D38u;
            // 0x319d3c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D40u; }
        if (ctx->pc != 0x319D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D40u; }
        if (ctx->pc != 0x319D40u) { return; }
    }
    ctx->pc = 0x319D40u;
label_319d40:
    // 0x319d40: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x319d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x319d44: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x319d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_319d48:
    // 0x319d48: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x319D48u;
    {
        const bool branch_taken_0x319d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319D48u;
            // 0x319d4c: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d48) {
            ctx->pc = 0x319D78u;
            goto label_319d78;
        }
    }
    ctx->pc = 0x319D50u;
    // 0x319d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x319d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d54: 0xc05191c  jal         func_146470
    ctx->pc = 0x319D54u;
    SET_GPR_U32(ctx, 31, 0x319D5Cu);
    ctx->pc = 0x319D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319D54u;
            // 0x319d58: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D5Cu; }
        if (ctx->pc != 0x319D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D5Cu; }
        if (ctx->pc != 0x319D5Cu) { return; }
    }
    ctx->pc = 0x319D5Cu;
label_319d5c:
    // 0x319d5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319D5Cu;
    {
        const bool branch_taken_0x319d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319d5c) {
            ctx->pc = 0x319D74u;
            goto label_319d74;
        }
    }
    ctx->pc = 0x319D64u;
    // 0x319d64: 0x8f85a344  lw          $a1, -0x5CBC($gp)
    ctx->pc = 0x319d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943556)));
    // 0x319d68: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x319D68u;
    SET_GPR_U32(ctx, 31, 0x319D70u);
    ctx->pc = 0x319D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319D68u;
            // 0x319d6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D70u; }
        if (ctx->pc != 0x319D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D70u; }
        if (ctx->pc != 0x319D70u) { return; }
    }
    ctx->pc = 0x319D70u;
label_319d70:
    // 0x319d70: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x319d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_319d74:
    // 0x319d74: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x319d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_319d78:
    // 0x319d78: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x319D78u;
    {
        const bool branch_taken_0x319d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319D78u;
            // 0x319d7c: 0x2a220007  slti        $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d78) {
            ctx->pc = 0x319DA8u;
            goto label_319da8;
        }
    }
    ctx->pc = 0x319D80u;
    // 0x319d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x319d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d84: 0xc05191c  jal         func_146470
    ctx->pc = 0x319D84u;
    SET_GPR_U32(ctx, 31, 0x319D8Cu);
    ctx->pc = 0x319D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319D84u;
            // 0x319d88: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D8Cu; }
        if (ctx->pc != 0x319D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319D8Cu; }
        if (ctx->pc != 0x319D8Cu) { return; }
    }
    ctx->pc = 0x319D8Cu;
label_319d8c:
    // 0x319d8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319D8Cu;
    {
        const bool branch_taken_0x319d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319d8c) {
            ctx->pc = 0x319DA4u;
            goto label_319da4;
        }
    }
    ctx->pc = 0x319D94u;
    // 0x319d94: 0x8f85a344  lw          $a1, -0x5CBC($gp)
    ctx->pc = 0x319d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943556)));
    // 0x319d98: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x319D98u;
    SET_GPR_U32(ctx, 31, 0x319DA0u);
    ctx->pc = 0x319D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319D98u;
            // 0x319d9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319DA0u; }
        if (ctx->pc != 0x319DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319DA0u; }
        if (ctx->pc != 0x319DA0u) { return; }
    }
    ctx->pc = 0x319DA0u;
label_319da0:
    // 0x319da0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x319da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_319da4:
    // 0x319da4: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x319da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_319da8:
    // 0x319da8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x319DA8u;
    {
        const bool branch_taken_0x319da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319DA8u;
            // 0x319dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319da8) {
            ctx->pc = 0x319DC8u;
            goto label_319dc8;
        }
    }
    ctx->pc = 0x319DB0u;
    // 0x319db0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319DB0u;
    SET_GPR_U32(ctx, 31, 0x319DB8u);
    ctx->pc = 0x319DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319DB0u;
            // 0x319db4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319DB8u; }
        if (ctx->pc != 0x319DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319DB8u; }
        if (ctx->pc != 0x319DB8u) { return; }
    }
    ctx->pc = 0x319DB8u;
label_319db8:
    // 0x319db8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x319db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319dbc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319DBCu;
    SET_GPR_U32(ctx, 31, 0x319DC4u);
    ctx->pc = 0x319DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319DBCu;
            // 0x319dc0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319DC4u; }
        if (ctx->pc != 0x319DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319DC4u; }
        if (ctx->pc != 0x319DC4u) { return; }
    }
    ctx->pc = 0x319DC4u;
label_319dc4:
    // 0x319dc4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x319dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_319dc8:
    // 0x319dc8: 0x8f83a36c  lw          $v1, -0x5C94($gp)
    ctx->pc = 0x319dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943596)));
    // 0x319dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319dd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x319dd4: 0xaf83a36c  sw          $v1, -0x5C94($gp)
    ctx->pc = 0x319dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943596), GPR_U32(ctx, 3));
    // 0x319dd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x319dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_319ddc:
    // 0x319ddc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x319ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x319de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319de8: 0x3e00008  jr          $ra
    ctx->pc = 0x319DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319DE8u;
            // 0x319dec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319DF0u;
}
