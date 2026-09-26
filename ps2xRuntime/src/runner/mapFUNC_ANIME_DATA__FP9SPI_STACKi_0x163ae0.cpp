#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_ANIME_DATA__FP9SPI_STACKi
// Address: 0x163ae0 - 0x163bf4
void mapFUNC_ANIME_DATA__FP9SPI_STACKi_0x163ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_ANIME_DATA__FP9SPI_STACKi_0x163ae0");
#endif

    switch (ctx->pc) {
        case 0x163b14u: goto label_163b14;
        case 0x163b20u: goto label_163b20;
        case 0x163b30u: goto label_163b30;
        case 0x163b3cu: goto label_163b3c;
        case 0x163b4cu: goto label_163b4c;
        case 0x163b58u: goto label_163b58;
        case 0x163b68u: goto label_163b68;
        case 0x163b78u: goto label_163b78;
        case 0x163b88u: goto label_163b88;
        case 0x163b94u: goto label_163b94;
        case 0x163ba0u: goto label_163ba0;
        case 0x163bbcu: goto label_163bbc;
        case 0x163bd4u: goto label_163bd4;
        default: break;
    }

    ctx->pc = 0x163ae0u;

    // 0x163ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x163ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x163ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x163aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163af4: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163AF8u;
    {
        const bool branch_taken_0x163af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163AF8u;
            // 0x163afc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163af8) {
            ctx->pc = 0x163B08u;
            goto label_163b08;
        }
    }
    ctx->pc = 0x163B00u;
    // 0x163b00: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x163B00u;
    {
        const bool branch_taken_0x163b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B00u;
            // 0x163b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b00) {
            ctx->pc = 0x163BDCu;
            goto label_163bdc;
        }
    }
    ctx->pc = 0x163B08u;
label_163b08:
    // 0x163b08: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x163b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x163b0c: 0xc05191c  jal         func_146470
    ctx->pc = 0x163B0Cu;
    SET_GPR_U32(ctx, 31, 0x163B14u);
    ctx->pc = 0x163B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B0Cu;
            // 0x163b10: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B14u; }
        if (ctx->pc != 0x163B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B14u; }
        if (ctx->pc != 0x163B14u) { return; }
    }
    ctx->pc = 0x163B14u;
label_163b14:
    // 0x163b14: 0x8f858920  lw          $a1, -0x76E0($gp)
    ctx->pc = 0x163b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x163b18: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x163B18u;
    SET_GPR_U32(ctx, 31, 0x163B20u);
    ctx->pc = 0x163B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B18u;
            // 0x163b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B20u; }
        if (ctx->pc != 0x163B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B20u; }
        if (ctx->pc != 0x163B20u) { return; }
    }
    ctx->pc = 0x163B20u;
label_163b20:
    // 0x163b20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163b24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x163b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x163b28: 0xc05191c  jal         func_146470
    ctx->pc = 0x163B28u;
    SET_GPR_U32(ctx, 31, 0x163B30u);
    ctx->pc = 0x163B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B28u;
            // 0x163b2c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B30u; }
        if (ctx->pc != 0x163B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B30u; }
        if (ctx->pc != 0x163B30u) { return; }
    }
    ctx->pc = 0x163B30u;
label_163b30:
    // 0x163b30: 0x8f858920  lw          $a1, -0x76E0($gp)
    ctx->pc = 0x163b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x163b34: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x163B34u;
    SET_GPR_U32(ctx, 31, 0x163B3Cu);
    ctx->pc = 0x163B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B34u;
            // 0x163b38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B3Cu; }
        if (ctx->pc != 0x163B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B3Cu; }
        if (ctx->pc != 0x163B3Cu) { return; }
    }
    ctx->pc = 0x163B3Cu;
label_163b3c:
    // 0x163b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163b40: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x163b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x163b44: 0xc05191c  jal         func_146470
    ctx->pc = 0x163B44u;
    SET_GPR_U32(ctx, 31, 0x163B4Cu);
    ctx->pc = 0x163B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B44u;
            // 0x163b48: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B4Cu; }
        if (ctx->pc != 0x163B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B4Cu; }
        if (ctx->pc != 0x163B4Cu) { return; }
    }
    ctx->pc = 0x163B4Cu;
label_163b4c:
    // 0x163b4c: 0x8f858920  lw          $a1, -0x76E0($gp)
    ctx->pc = 0x163b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x163b50: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x163B50u;
    SET_GPR_U32(ctx, 31, 0x163B58u);
    ctx->pc = 0x163B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B50u;
            // 0x163b54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B58u; }
        if (ctx->pc != 0x163B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B58u; }
        if (ctx->pc != 0x163B58u) { return; }
    }
    ctx->pc = 0x163B58u;
label_163b58:
    // 0x163b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163b5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x163b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x163b60: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163B60u;
    SET_GPR_U32(ctx, 31, 0x163B68u);
    ctx->pc = 0x163B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B60u;
            // 0x163b64: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B68u; }
        if (ctx->pc != 0x163B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B68u; }
        if (ctx->pc != 0x163B68u) { return; }
    }
    ctx->pc = 0x163B68u;
label_163b68:
    // 0x163b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163b6c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x163b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x163b70: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163B70u;
    SET_GPR_U32(ctx, 31, 0x163B78u);
    ctx->pc = 0x163B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B70u;
            // 0x163b74: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B78u; }
        if (ctx->pc != 0x163B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B78u; }
        if (ctx->pc != 0x163B78u) { return; }
    }
    ctx->pc = 0x163B78u;
label_163b78:
    // 0x163b78: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x163b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x163b7c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x163b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x163b80: 0xc051928  jal         func_1464A0
    ctx->pc = 0x163B80u;
    SET_GPR_U32(ctx, 31, 0x163B88u);
    ctx->pc = 0x163B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B80u;
            // 0x163b84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B88u; }
        if (ctx->pc != 0x163B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B88u; }
        if (ctx->pc != 0x163B88u) { return; }
    }
    ctx->pc = 0x163B88u;
label_163b88:
    // 0x163b88: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x163b8c: 0xc051928  jal         func_1464A0
    ctx->pc = 0x163B8Cu;
    SET_GPR_U32(ctx, 31, 0x163B94u);
    ctx->pc = 0x163B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B8Cu;
            // 0x163b90: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B94u; }
        if (ctx->pc != 0x163B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B94u; }
        if (ctx->pc != 0x163B94u) { return; }
    }
    ctx->pc = 0x163B94u;
label_163b94:
    // 0x163b94: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x163b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x163b98: 0xc051928  jal         func_1464A0
    ctx->pc = 0x163B98u;
    SET_GPR_U32(ctx, 31, 0x163BA0u);
    ctx->pc = 0x163B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B98u;
            // 0x163b9c: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BA0u; }
        if (ctx->pc != 0x163BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BA0u; }
        if (ctx->pc != 0x163BA0u) { return; }
    }
    ctx->pc = 0x163BA0u;
label_163ba0:
    // 0x163ba0: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x163ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x163ba4: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x163ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x163ba8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163BA8u;
    {
        const bool branch_taken_0x163ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163BA8u;
            // 0x163bac: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ba8) {
            ctx->pc = 0x163BC0u;
            goto label_163bc0;
        }
    }
    ctx->pc = 0x163BB0u;
    // 0x163bb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163bb4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163BB4u;
    SET_GPR_U32(ctx, 31, 0x163BBCu);
    ctx->pc = 0x163BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163BB4u;
            // 0x163bb8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BBCu; }
        if (ctx->pc != 0x163BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BBCu; }
        if (ctx->pc != 0x163BBCu) { return; }
    }
    ctx->pc = 0x163BBCu;
label_163bbc:
    // 0x163bbc: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x163bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_163bc0:
    // 0x163bc0: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x163bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x163bc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163BC4u;
    {
        const bool branch_taken_0x163bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163BC4u;
            // 0x163bc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bc4) {
            ctx->pc = 0x163BDCu;
            goto label_163bdc;
        }
    }
    ctx->pc = 0x163BCCu;
    // 0x163bcc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163BCCu;
    SET_GPR_U32(ctx, 31, 0x163BD4u);
    ctx->pc = 0x163BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163BCCu;
            // 0x163bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BD4u; }
        if (ctx->pc != 0x163BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BD4u; }
        if (ctx->pc != 0x163BD4u) { return; }
    }
    ctx->pc = 0x163BD4u;
label_163bd4:
    // 0x163bd4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x163bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x163bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163bdc:
    // 0x163bdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x163bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163bec: 0x3e00008  jr          $ra
    ctx->pc = 0x163BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163BECu;
            // 0x163bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163BF4u;
}
