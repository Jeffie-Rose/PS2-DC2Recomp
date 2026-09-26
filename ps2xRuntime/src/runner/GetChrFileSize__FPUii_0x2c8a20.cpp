#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetChrFileSize__FPUii
// Address: 0x2c8a20 - 0x2c8b68
void GetChrFileSize__FPUii_0x2c8a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetChrFileSize__FPUii_0x2c8a20");
#endif

    switch (ctx->pc) {
        case 0x2c8a4cu: goto label_2c8a4c;
        case 0x2c8a6cu: goto label_2c8a6c;
        case 0x2c8ad4u: goto label_2c8ad4;
        default: break;
    }

    ctx->pc = 0x2c8a20u;

    // 0x2c8a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c8a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c8a24: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2c8a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c8a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8a2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c8a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c8a30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8a34: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2c8a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c8a38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c8a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c8a3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c8a44: 0xc052788  jal         func_149E20
    ctx->pc = 0x2C8A44u;
    SET_GPR_U32(ctx, 31, 0x2C8A4Cu);
    ctx->pc = 0x2C8A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8A44u;
            // 0x2c8a48: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8A4Cu; }
        if (ctx->pc != 0x2C8A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8A4Cu; }
        if (ctx->pc != 0x2C8A4Cu) { return; }
    }
    ctx->pc = 0x2C8A4Cu;
label_2c8a4c:
    // 0x2c8a4c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2c8a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c8a50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c8a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a54: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C8A54u;
    {
        const bool branch_taken_0x2c8a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8A54u;
            // 0x2c8a58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a54) {
            ctx->pc = 0x2C8AF4u;
            goto label_2c8af4;
        }
    }
    ctx->pc = 0x2C8A5Cu;
    // 0x2c8a5c: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x2c8a5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2c8a60: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C8A60u;
    {
        const bool branch_taken_0x2c8a60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8A60u;
            // 0x2c8a64: 0x244cfff8  addiu       $t4, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a60) {
            ctx->pc = 0x2C8AC4u;
            goto label_2c8ac4;
        }
    }
    ctx->pc = 0x2C8A68u;
    // 0x2c8a68: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2c8a68u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8a6c:
    // 0x2c8a6c: 0x1bd1821  addu        $v1, $t5, $sp
    ctx->pc = 0x2c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 29)));
    // 0x2c8a70: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x2c8a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x2c8a74: 0x246e0040  addiu       $t6, $v1, 0x40
    ctx->pc = 0x2c8a74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2c8a78: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x2c8a78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x2c8a7c: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x2c8a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2c8a80: 0x16c182a  slt         $v1, $t3, $t4
    ctx->pc = 0x2c8a80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2c8a84: 0x8dc40004  lw          $a0, 0x4($t6)
    ctx->pc = 0x2c8a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2c8a88: 0x8dc90008  lw          $t1, 0x8($t6)
    ctx->pc = 0x2c8a88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2c8a8c: 0x8dc8000c  lw          $t0, 0xC($t6)
    ctx->pc = 0x2c8a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x2c8a90: 0x8dc70010  lw          $a3, 0x10($t6)
    ctx->pc = 0x2c8a90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2c8a94: 0x8dc60014  lw          $a2, 0x14($t6)
    ctx->pc = 0x2c8a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x2c8a98: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x2c8a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2c8a9c: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2c8a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2c8aa0: 0x8dc50018  lw          $a1, 0x18($t6)
    ctx->pc = 0x2c8aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x2c8aa4: 0x8dc4001c  lw          $a0, 0x1C($t6)
    ctx->pc = 0x2c8aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x2c8aa8: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x2c8aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2c8aac: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x2c8aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2c8ab0: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x2c8ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2c8ab4: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x2c8ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2c8ab8: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x2c8ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2c8abc: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2C8ABCu;
    {
        const bool branch_taken_0x2c8abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8ABCu;
            // 0x2c8ac0: 0x1445021  addu        $t2, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8abc) {
            ctx->pc = 0x2C8A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8a6c;
        }
    }
    ctx->pc = 0x2C8AC4u;
label_2c8ac4:
    // 0x2c8ac4: 0x0  nop
    ctx->pc = 0x2c8ac4u;
    // NOP
    // 0x2c8ac8: 0x162082a  slt         $at, $t3, $v0
    ctx->pc = 0x2c8ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c8acc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8ACCu;
    {
        const bool branch_taken_0x2c8acc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8ACCu;
            // 0x2c8ad0: 0xb2880  sll         $a1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8acc) {
            ctx->pc = 0x2C8AF4u;
            goto label_2c8af4;
        }
    }
    ctx->pc = 0x2C8AD4u;
label_2c8ad4:
    // 0x2c8ad4: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x2c8ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2c8ad8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2c8ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2c8adc: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2c8adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2c8ae0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c8ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c8ae4: 0x162182a  slt         $v1, $t3, $v0
    ctx->pc = 0x2c8ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c8ae8: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2c8ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2c8aec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C8AECu;
    {
        const bool branch_taken_0x2c8aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8aec) {
            ctx->pc = 0x2C8AD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8ad4;
        }
    }
    ctx->pc = 0x2C8AF4u;
label_2c8af4:
    // 0x2c8af4: 0x0  nop
    ctx->pc = 0x2c8af4u;
    // NOP
    // 0x2c8af8: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x2c8af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x2c8afc: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x2c8afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x2c8b00: 0xa2fc2  srl         $a1, $t2, 31
    ctx->pc = 0x2c8b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x2c8b04: 0x8a0018  mult        $zero, $a0, $t2
    ctx->pc = 0x2c8b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2c8b08: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2c8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2c8b0c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2c8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2c8b10: 0x20a1023  subu        $v0, $s0, $t2
    ctx->pc = 0x2c8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x2c8b14: 0x2010  mfhi        $a0
    ctx->pc = 0x2c8b14u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2c8b18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c8b1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c8b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8b24: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8B24u;
    {
        const bool branch_taken_0x2c8b24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C8B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B24u;
            // 0x2c8b28: 0x304303ff  andi        $v1, $v0, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b24) {
            ctx->pc = 0x2C8B38u;
            goto label_2c8b38;
        }
    }
    ctx->pc = 0x2C8B2Cu;
    // 0x2c8b2c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8B2Cu;
    {
        const bool branch_taken_0x2c8b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b2c) {
            ctx->pc = 0x2C8B38u;
            goto label_2c8b38;
        }
    }
    ctx->pc = 0x2C8B34u;
    // 0x2c8b34: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x2c8b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
label_2c8b38:
    // 0x2c8b38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8B38u;
    {
        const bool branch_taken_0x2c8b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B38u;
            // 0x2c8b3c: 0x21a83  sra         $v1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b38) {
            ctx->pc = 0x2C8B58u;
            goto label_2c8b58;
        }
    }
    ctx->pc = 0x2C8B40u;
    // 0x2c8b40: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8B40u;
    {
        const bool branch_taken_0x2c8b40 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c8b40) {
            ctx->pc = 0x2C8B50u;
            goto label_2c8b50;
        }
    }
    ctx->pc = 0x2C8B48u;
    // 0x2c8b48: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2c8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2c8b4c: 0x21a83  sra         $v1, $v0, 10
    ctx->pc = 0x2c8b4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 10));
label_2c8b50:
    // 0x2c8b50: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x2c8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2c8b54: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2c8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_2c8b58:
    // 0x2c8b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B60u;
            // 0x2c8b64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8B68u;
}
