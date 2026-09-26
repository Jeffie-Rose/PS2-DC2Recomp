#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: niNPC_INFO_NUM__FP9SPI_STACKi
// Address: 0x319bd0 - 0x319c74
void niNPC_INFO_NUM__FP9SPI_STACKi_0x319bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("niNPC_INFO_NUM__FP9SPI_STACKi_0x319bd0");
#endif

    switch (ctx->pc) {
        case 0x319be0u: goto label_319be0;
        case 0x319c14u: goto label_319c14;
        case 0x319c2cu: goto label_319c2c;
        case 0x319c48u: goto label_319c48;
        default: break;
    }

    ctx->pc = 0x319bd0u;

    // 0x319bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319bd8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319BD8u;
    SET_GPR_U32(ctx, 31, 0x319BE0u);
    ctx->pc = 0x319BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319BD8u;
            // 0x319bdc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319BE0u; }
        if (ctx->pc != 0x319BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319BE0u; }
        if (ctx->pc != 0x319BE0u) { return; }
    }
    ctx->pc = 0x319BE0u;
label_319be0:
    // 0x319be0: 0xaf82a338  sw          $v0, -0x5CC8($gp)
    ctx->pc = 0x319be0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943544), GPR_U32(ctx, 2));
    // 0x319be4: 0x8f90a338  lw          $s0, -0x5CC8($gp)
    ctx->pc = 0x319be4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943544)));
    // 0x319be8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x319be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x319bec: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x319becu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x319bf0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x319bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x319bf4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x319bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x319bf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319BF8u;
    {
        const bool branch_taken_0x319bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319BF8u;
            // 0x319bfc: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319bf8) {
            ctx->pc = 0x319C08u;
            goto label_319c08;
        }
    }
    ctx->pc = 0x319C00u;
    // 0x319c00: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x319c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x319c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x319c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_319c08:
    // 0x319c08: 0x8f84a344  lw          $a0, -0x5CBC($gp)
    ctx->pc = 0x319c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943556)));
    // 0x319c0c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x319C0Cu;
    SET_GPR_U32(ctx, 31, 0x319C14u);
    ctx->pc = 0x319C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319C0Cu;
            // 0x319c10: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319C14u; }
        if (ctx->pc != 0x319C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319C14u; }
        if (ctx->pc != 0x319C14u) { return; }
    }
    ctx->pc = 0x319C14u;
label_319c14:
    // 0x319c14: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x319c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x319c18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c1c: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x319c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x319c20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x319c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x319c24: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x319C24u;
    SET_GPR_U32(ctx, 31, 0x319C2Cu);
    ctx->pc = 0x319C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319C24u;
            // 0x319c28: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319C2Cu; }
        if (ctx->pc != 0x319C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319C2Cu; }
        if (ctx->pc != 0x319C2Cu) { return; }
    }
    ctx->pc = 0x319C2Cu;
label_319c2c:
    // 0x319c2c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x319c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x319c30: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x319c30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c38: 0x24a59c80  addiu       $a1, $a1, -0x6380
    ctx->pc = 0x319c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941824));
    // 0x319c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x319c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c40: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x319C40u;
    SET_GPR_U32(ctx, 31, 0x319C48u);
    ctx->pc = 0x319C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319C40u;
            // 0x319c44: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319C48u; }
        if (ctx->pc != 0x319C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319C48u; }
        if (ctx->pc != 0x319C48u) { return; }
    }
    ctx->pc = 0x319C48u;
label_319c48:
    // 0x319c48: 0xaf82a33c  sw          $v0, -0x5CC4($gp)
    ctx->pc = 0x319c48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943548), GPR_U32(ctx, 2));
    // 0x319c4c: 0x8f82a33c  lw          $v0, -0x5CC4($gp)
    ctx->pc = 0x319c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943548)));
    // 0x319c50: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x319C50u;
    {
        const bool branch_taken_0x319c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319c50) {
            ctx->pc = 0x319C5Cu;
            goto label_319c5c;
        }
    }
    ctx->pc = 0x319C58u;
    // 0x319c58: 0xaf80a338  sw          $zero, -0x5CC8($gp)
    ctx->pc = 0x319c58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943544), GPR_U32(ctx, 0));
label_319c5c:
    // 0x319c5c: 0xaf80a36c  sw          $zero, -0x5C94($gp)
    ctx->pc = 0x319c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943596), GPR_U32(ctx, 0));
    // 0x319c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x319C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319C6Cu;
            // 0x319c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319C74u;
}
