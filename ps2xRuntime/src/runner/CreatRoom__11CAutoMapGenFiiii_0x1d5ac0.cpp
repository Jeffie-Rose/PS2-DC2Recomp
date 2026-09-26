#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatRoom__11CAutoMapGenFiiii
// Address: 0x1d5ac0 - 0x1d5e44
void CreatRoom__11CAutoMapGenFiiii_0x1d5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatRoom__11CAutoMapGenFiiii_0x1d5ac0");
#endif

    switch (ctx->pc) {
        case 0x1d5af8u: goto label_1d5af8;
        case 0x1d5b00u: goto label_1d5b00;
        case 0x1d5b48u: goto label_1d5b48;
        case 0x1d5be8u: goto label_1d5be8;
        case 0x1d5c00u: goto label_1d5c00;
        case 0x1d5c50u: goto label_1d5c50;
        case 0x1d5c70u: goto label_1d5c70;
        case 0x1d5cd0u: goto label_1d5cd0;
        case 0x1d5cd8u: goto label_1d5cd8;
        default: break;
    }

    ctx->pc = 0x1d5ac0u;

    // 0x1d5ac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d5ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d5ac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5ac8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d5ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d5acc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d5accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d5ad0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d5ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d5ad4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d5ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d5ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d5adc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d5adcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ae0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5ae4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d5ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5aec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d5aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5af0: 0x1502001c  bne         $t0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AF0u;
            // 0x1d5af4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D5B64u;
            goto label_1d5b64;
        }
    }
    ctx->pc = 0x1D5AF8u;
label_1d5af8:
    // 0x1d5af8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D5AF8u;
    SET_GPR_U32(ctx, 31, 0x1D5B00u);
    ctx->pc = 0x1D5AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AF8u;
            // 0x1d5afc: 0x8e6401c8  lw          $a0, 0x1C8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B00u; }
        if (ctx->pc != 0x1D5B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B00u; }
        if (ctx->pc != 0x1D5B00u) { return; }
    }
    ctx->pc = 0x1D5B00u;
label_1d5b00:
    // 0x1d5b00: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d5b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d5b04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d5b04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5b0c: 0x8e6201c4  lw          $v0, 0x1C4($s3)
    ctx->pc = 0x1d5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d5b10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d5b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5b18: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d5b1c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5B1Cu;
    {
        const bool branch_taken_0x1d5b1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d5b1c) {
            ctx->pc = 0x1D5B28u;
            goto label_1d5b28;
        }
    }
    ctx->pc = 0x1D5B24u;
    // 0x1d5b24: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d5b24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5b28:
    // 0x1d5b28: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1d5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1d5b2c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1d5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1d5b30: 0x8e6201c4  lw          $v0, 0x1C4($s3)
    ctx->pc = 0x1d5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d5b34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d5b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5b3c: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x1d5b3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d5b40: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D5B40u;
    SET_GPR_U32(ctx, 31, 0x1D5B48u);
    ctx->pc = 0x1D5B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B40u;
            // 0x1d5b44: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B48u; }
        if (ctx->pc != 0x1D5B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B48u; }
        if (ctx->pc != 0x1D5B48u) { return; }
    }
    ctx->pc = 0x1D5B48u;
label_1d5b48:
    // 0x1d5b48: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x1d5b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5b4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5B4Cu;
    {
        const bool branch_taken_0x1d5b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b4c) {
            ctx->pc = 0x1D5B58u;
            goto label_1d5b58;
        }
    }
    ctx->pc = 0x1D5B54u;
    // 0x1d5b54: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d5b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5b58:
    // 0x1d5b58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5b5c: 0x1282ffe6  beq         $s4, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1D5B5Cu;
    {
        const bool branch_taken_0x1d5b5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B5Cu;
            // 0x1d5b60: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b5c) {
            ctx->pc = 0x1D5AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5af8;
        }
    }
    ctx->pc = 0x1D5B64u;
label_1d5b64:
    // 0x1d5b64: 0x8e6201c4  lw          $v0, 0x1C4($s3)
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x1d5b68: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d5b6c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1d5b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d5b70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d5b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5b78: 0x8c4e0014  lw          $t6, 0x14($v0)
    ctx->pc = 0x1d5b78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d5b7c: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5B7Cu;
    {
        const bool branch_taken_0x1d5b7c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b7c) {
            ctx->pc = 0x1D5B8Cu;
            goto label_1d5b8c;
        }
    }
    ctx->pc = 0x1D5B84u;
    // 0x1d5b84: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1D5B84u;
    {
        const bool branch_taken_0x1d5b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B84u;
            // 0x1d5b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b84) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5B8Cu;
label_1d5b8c:
    // 0x1d5b8c: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1d5b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d5b90: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5B90u;
    {
        const bool branch_taken_0x1d5b90 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1D5B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B90u;
            // 0x1d5b94: 0x8c470004  lw          $a3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b90) {
            ctx->pc = 0x1D5BA0u;
            goto label_1d5ba0;
        }
    }
    ctx->pc = 0x1D5B98u;
    // 0x1d5b98: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5B98u;
    {
        const bool branch_taken_0x1d5b98 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1d5b98) {
            ctx->pc = 0x1D5BA8u;
            goto label_1d5ba8;
        }
    }
    ctx->pc = 0x1D5BA0u;
label_1d5ba0:
    // 0x1d5ba0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1D5BA0u;
    {
        const bool branch_taken_0x1d5ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BA0u;
            // 0x1d5ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ba0) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5BA8u;
label_1d5ba8:
    // 0x1d5ba8: 0x866201b8  lh          $v0, 0x1B8($s3)
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d5bac: 0x2476021  addu        $t4, $s2, $a3
    ctx->pc = 0x1d5bacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1d5bb0: 0x4c082a  slt         $at, $v0, $t4
    ctx->pc = 0x1d5bb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1d5bb4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5BB4u;
    {
        const bool branch_taken_0x1d5bb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5bb4) {
            ctx->pc = 0x1D5BD0u;
            goto label_1d5bd0;
        }
    }
    ctx->pc = 0x1D5BBCu;
    // 0x1d5bbc: 0x866301ba  lh          $v1, 0x1BA($s3)
    ctx->pc = 0x1d5bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 442)));
    // 0x1d5bc0: 0x2286821  addu        $t5, $s1, $t0
    ctx->pc = 0x1d5bc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1d5bc4: 0x6d082a  slt         $at, $v1, $t5
    ctx->pc = 0x1d5bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1d5bc8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5BC8u;
    {
        const bool branch_taken_0x1d5bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BC8u;
            // 0x1d5bcc: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bc8) {
            ctx->pc = 0x1D5BD8u;
            goto label_1d5bd8;
        }
    }
    ctx->pc = 0x1D5BD0u;
label_1d5bd0:
    // 0x1d5bd0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1D5BD0u;
    {
        const bool branch_taken_0x1d5bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BD0u;
            // 0x1d5bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bd0) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5BD8u;
label_1d5bd8:
    // 0x1d5bd8: 0x2629ffff  addiu       $t1, $s1, -0x1
    ctx->pc = 0x1d5bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d5bdc: 0x723023  subu        $a2, $v1, $s2
    ctx->pc = 0x1d5bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d5be0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5BE0u;
    {
        const bool branch_taken_0x1d5be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BE0u;
            // 0x1d5be4: 0x25a40001  addiu       $a0, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5be0) {
            ctx->pc = 0x1D5C38u;
            goto label_1d5c38;
        }
    }
    ctx->pc = 0x1D5BE8u;
label_1d5be8:
    // 0x1d5be8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1d5be8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bec: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x1d5becu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d5bf0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d5bf4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5bf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D5BF8u;
    {
        const bool branch_taken_0x1d5bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BF8u;
            // 0x1d5bfc: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bf8) {
            ctx->pc = 0x1D5C28u;
            goto label_1d5c28;
        }
    }
    ctx->pc = 0x1D5C00u;
label_1d5c00:
    // 0x1d5c00: 0x8e6301cc  lw          $v1, 0x1CC($s3)
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d5c04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5c08: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1d5c0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5c10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5C10u;
    {
        const bool branch_taken_0x1d5c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c10) {
            ctx->pc = 0x1D5C20u;
            goto label_1d5c20;
        }
    }
    ctx->pc = 0x1D5C18u;
    // 0x1d5c18: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1D5C18u;
    {
        const bool branch_taken_0x1d5c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C18u;
            // 0x1d5c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c18) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5C20u;
label_1d5c20:
    // 0x1d5c20: 0x256b001c  addiu       $t3, $t3, 0x1C
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 28));
    // 0x1d5c24: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d5c24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d5c28:
    // 0x1d5c28: 0x14c182a  slt         $v1, $t2, $t4
    ctx->pc = 0x1d5c28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1d5c2c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D5C2Cu;
    {
        const bool branch_taken_0x1d5c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c2c) {
            ctx->pc = 0x1D5C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5c00;
        }
    }
    ctx->pc = 0x1D5C34u;
    // 0x1d5c34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1d5c38:
    // 0x1d5c38: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x1d5c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d5c3c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D5C3Cu;
    {
        const bool branch_taken_0x1d5c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C3Cu;
            // 0x1d5c40: 0x1222818  mult        $a1, $t1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c3c) {
            ctx->pc = 0x1D5BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5be8;
        }
    }
    ctx->pc = 0x1D5C44u;
    // 0x1d5c44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c48: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D5C48u;
    {
        const bool branch_taken_0x1d5c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C48u;
            // 0x1d5c4c: 0x25840001  addiu       $a0, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c48) {
            ctx->pc = 0x1D5CA8u;
            goto label_1d5ca8;
        }
    }
    ctx->pc = 0x1D5C50u;
label_1d5c50:
    // 0x1d5c50: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1d5c54: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1d5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1d5c58: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x1d5c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d5c5c: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x1d5c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5c60: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d5c64: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d5c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5c68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D5C68u;
    {
        const bool branch_taken_0x1d5c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C68u;
            // 0x1d5c6c: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c68) {
            ctx->pc = 0x1D5C98u;
            goto label_1d5c98;
        }
    }
    ctx->pc = 0x1D5C70u;
label_1d5c70:
    // 0x1d5c70: 0x8e6301cc  lw          $v1, 0x1CC($s3)
    ctx->pc = 0x1d5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d5c74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5c78: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5c7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5c80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5C80u;
    {
        const bool branch_taken_0x1d5c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c80) {
            ctx->pc = 0x1D5C90u;
            goto label_1d5c90;
        }
    }
    ctx->pc = 0x1D5C88u;
    // 0x1d5c88: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1D5C88u;
    {
        const bool branch_taken_0x1d5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C88u;
            // 0x1d5c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c88) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5C90u;
label_1d5c90:
    // 0x1d5c90: 0x254a001c  addiu       $t2, $t2, 0x1C
    ctx->pc = 0x1d5c90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28));
    // 0x1d5c94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d5c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1d5c98:
    // 0x1d5c98: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x1d5c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d5c9c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D5C9Cu;
    {
        const bool branch_taken_0x1d5c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c9c) {
            ctx->pc = 0x1D5C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5c70;
        }
    }
    ctx->pc = 0x1D5CA4u;
    // 0x1d5ca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d5ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d5ca8:
    // 0x1d5ca8: 0xcd182a  slt         $v1, $a2, $t5
    ctx->pc = 0x1d5ca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1d5cac: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D5CACu;
    {
        const bool branch_taken_0x1d5cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CACu;
            // 0x1d5cb0: 0x2649ffff  addiu       $t1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cac) {
            ctx->pc = 0x1D5C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5c50;
        }
    }
    ctx->pc = 0x1D5CB4u;
    // 0x1d5cb4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d5cb8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d5cbc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1d5cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cc0: 0x523023  subu        $a2, $v0, $s2
    ctx->pc = 0x1d5cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d5cc4: 0x24639080  addiu       $v1, $v1, -0x6F80
    ctx->pc = 0x1d5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938752));
    // 0x1d5cc8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1D5CC8u;
    {
        const bool branch_taken_0x1d5cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CC8u;
            // 0x1d5ccc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cc8) {
            ctx->pc = 0x1D5DF0u;
            goto label_1d5df0;
        }
    }
    ctx->pc = 0x1D5CD0u;
label_1d5cd0:
    // 0x1d5cd0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D5CD0u;
    {
        const bool branch_taken_0x1d5cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CD0u;
            // 0x1d5cd4: 0x65880  sll         $t3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cd0) {
            ctx->pc = 0x1D5DE0u;
            goto label_1d5de0;
        }
    }
    ctx->pc = 0x1D5CD8u;
label_1d5cd8:
    // 0x1d5cd8: 0x85c50000  lh          $a1, 0x0($t6)
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d5cdc: 0x85c20002  lh          $v0, 0x2($t6)
    ctx->pc = 0x1d5cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x1d5ce0: 0x10a4003d  beq         $a1, $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D5CE0u;
    {
        const bool branch_taken_0x1d5ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D5CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CE0u;
            // 0x1d5ce4: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ce0) {
            ctx->pc = 0x1D5DD8u;
            goto label_1d5dd8;
        }
    }
    ctx->pc = 0x1D5CE8u;
    // 0x1d5ce8: 0x867801b8  lh          $t8, 0x1B8($s3)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d5cec: 0x57840  sll         $t7, $a1, 1
    ctx->pc = 0x1d5cecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d5cf0: 0x1e57821  addu        $t7, $t7, $a1
    ctx->pc = 0x1d5cf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1d5cf4: 0x8e7401cc  lw          $s4, 0x1CC($s3)
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d5cf8: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x1d5cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x1d5cfc: 0x6f7821  addu        $t7, $v1, $t7
    ctx->pc = 0x1d5cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x1d5d00: 0x138c818  mult        $t9, $t1, $t8
    ctx->pc = 0x1d5d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x1d5d04: 0x19c0c0  sll         $t8, $t9, 3
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x1d5d08: 0x319c023  subu        $t8, $t8, $t9
    ctx->pc = 0x1d5d08u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x1d5d0c: 0x18c080  sll         $t8, $t8, 2
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x1d5d10: 0x298a021  addu        $s4, $s4, $t8
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x1d5d14: 0x28ba021  addu        $s4, $s4, $t3
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 11)));
    // 0x1d5d18: 0xa6850004  sh          $a1, 0x4($s4)
    ctx->pc = 0x1d5d18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5d1c: 0x867401b8  lh          $s4, 0x1B8($s3)
    ctx->pc = 0x1d5d1cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d5d20: 0x8e6501cc  lw          $a1, 0x1CC($s3)
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d5d24: 0x7134c018  mult1       $t8, $t1, $s4
    ctx->pc = 0x1d5d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x1d5d28: 0x18a0c0  sll         $s4, $t8, 3
    ctx->pc = 0x1d5d28u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x1d5d2c: 0x298a023  subu        $s4, $s4, $t8
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x1d5d30: 0x14a080  sll         $s4, $s4, 2
    ctx->pc = 0x1d5d30u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1d5d34: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x1d5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1d5d38: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1d5d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1d5d3c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x1d5d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5d40: 0x867401b8  lh          $s4, 0x1B8($s3)
    ctx->pc = 0x1d5d40u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d5d44: 0x8e6501cc  lw          $a1, 0x1CC($s3)
    ctx->pc = 0x1d5d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d5d48: 0x85e20004  lh          $v0, 0x4($t7)
    ctx->pc = 0x1d5d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1d5d4c: 0x134c018  mult        $t8, $t1, $s4
    ctx->pc = 0x1d5d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x1d5d50: 0x18a0c0  sll         $s4, $t8, 3
    ctx->pc = 0x1d5d50u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x1d5d54: 0x298a023  subu        $s4, $s4, $t8
    ctx->pc = 0x1d5d54u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x1d5d58: 0x14a080  sll         $s4, $s4, 2
    ctx->pc = 0x1d5d58u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1d5d5c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x1d5d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1d5d60: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1d5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1d5d64: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1d5d68: 0x91f40006  lbu         $s4, 0x6($t7)
    ctx->pc = 0x1d5d68u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 6)));
    // 0x1d5d6c: 0x866501b8  lh          $a1, 0x1B8($s3)
    ctx->pc = 0x1d5d6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d5d70: 0x8e6201cc  lw          $v0, 0x1CC($s3)
    ctx->pc = 0x1d5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d5d74: 0x71257818  mult1       $t7, $t1, $a1
    ctx->pc = 0x1d5d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d5d78: 0xf28c0  sll         $a1, $t7, 3
    ctx->pc = 0x1d5d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x1d5d7c: 0xaf2823  subu        $a1, $a1, $t7
    ctx->pc = 0x1d5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d5d80: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d5d84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d5d88: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1d5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1d5d8c: 0xa054000b  sb          $s4, 0xB($v0)
    ctx->pc = 0x1d5d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 20));
    // 0x1d5d90: 0x866501b8  lh          $a1, 0x1B8($s3)
    ctx->pc = 0x1d5d90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d5d94: 0x8e6201cc  lw          $v0, 0x1CC($s3)
    ctx->pc = 0x1d5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d5d98: 0x1257818  mult        $t7, $t1, $a1
    ctx->pc = 0x1d5d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d5d9c: 0xf28c0  sll         $a1, $t7, 3
    ctx->pc = 0x1d5d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x1d5da0: 0xaf2823  subu        $a1, $a1, $t7
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d5da4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d5da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d5da8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d5dac: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1d5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1d5db0: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1d5db0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5db4: 0x866501b8  lh          $a1, 0x1B8($s3)
    ctx->pc = 0x1d5db4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d5db8: 0x8e6201cc  lw          $v0, 0x1CC($s3)
    ctx->pc = 0x1d5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d5dbc: 0x71257818  mult1       $t7, $t1, $a1
    ctx->pc = 0x1d5dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d5dc0: 0xf28c0  sll         $a1, $t7, 3
    ctx->pc = 0x1d5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x1d5dc4: 0xaf2823  subu        $a1, $a1, $t7
    ctx->pc = 0x1d5dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d5dc8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d5dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d5dcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d5dd0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1d5dd4: 0xa4500008  sh          $s0, 0x8($v0)
    ctx->pc = 0x1d5dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 16));
label_1d5dd8:
    // 0x1d5dd8: 0x256b001c  addiu       $t3, $t3, 0x1C
    ctx->pc = 0x1d5dd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 28));
    // 0x1d5ddc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1d5de0:
    // 0x1d5de0: 0x14c102a  slt         $v0, $t2, $t4
    ctx->pc = 0x1d5de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1d5de4: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1D5DE4u;
    {
        const bool branch_taken_0x1d5de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5de4) {
            ctx->pc = 0x1D5CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5cd8;
        }
    }
    ctx->pc = 0x1D5DECu;
    // 0x1d5dec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d5decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1d5df0:
    // 0x1d5df0: 0x12d102a  slt         $v0, $t1, $t5
    ctx->pc = 0x1d5df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1d5df4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1D5DF4u;
    {
        const bool branch_taken_0x1d5df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DF4u;
            // 0x1d5df8: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5df4) {
            ctx->pc = 0x1D5CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5cd0;
        }
    }
    ctx->pc = 0x1D5DFCu;
    // 0x1d5dfc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d5e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5e0c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1d5e10: 0xac7201d8  sw          $s2, 0x1D8($v1)
    ctx->pc = 0x1d5e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 472), GPR_U32(ctx, 18));
    // 0x1d5e14: 0xac7101dc  sw          $s1, 0x1DC($v1)
    ctx->pc = 0x1d5e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 476), GPR_U32(ctx, 17));
    // 0x1d5e18: 0xac6701e0  sw          $a3, 0x1E0($v1)
    ctx->pc = 0x1d5e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 480), GPR_U32(ctx, 7));
    // 0x1d5e1c: 0xac6801e4  sw          $t0, 0x1E4($v1)
    ctx->pc = 0x1d5e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 484), GPR_U32(ctx, 8));
label_1d5e20:
    // 0x1d5e20: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d5e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5e24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d5e24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5e28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d5e28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5e2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d5e2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5e30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E3Cu;
            // 0x1d5e40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5E44u;
}
