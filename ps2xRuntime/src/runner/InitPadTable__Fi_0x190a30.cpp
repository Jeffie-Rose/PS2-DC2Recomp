#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPadTable__Fi
// Address: 0x190a30 - 0x190b94
void InitPadTable__Fi_0x190a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPadTable__Fi_0x190a30");
#endif

    switch (ctx->pc) {
        case 0x190a68u: goto label_190a68;
        case 0x190a70u: goto label_190a70;
        case 0x190b28u: goto label_190b28;
        case 0x190b50u: goto label_190b50;
        case 0x190b60u: goto label_190b60;
        default: break;
    }

    ctx->pc = 0x190a30u;

    // 0x190a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190a38: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x190a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190a40: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x190a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x190a44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190a48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a4c: 0xdf828060  ld          $v0, -0x7FA0($gp)
    ctx->pc = 0x190a4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x190a50: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x190a54: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x190a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
    // 0x190a58: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x190a58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x190a5c: 0xdf828068  ld          $v0, -0x7F98($gp)
    ctx->pc = 0x190a5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934632)));
    // 0x190a60: 0xc0bb4f8  jal         func_2ED3E0
    ctx->pc = 0x190A60u;
    SET_GPR_U32(ctx, 31, 0x190A68u);
    ctx->pc = 0x190A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190A60u;
            // 0x190a64: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED3E0u;
    if (runtime->hasFunction(0x2ED3E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A68u; }
        if (ctx->pc != 0x190A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CPadControlFv_0x2ed3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A68u; }
        if (ctx->pc != 0x190A68u) { return; }
    }
    ctx->pc = 0x190A68u;
label_190a68:
    // 0x190a68: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x190A68u;
    {
        const bool branch_taken_0x190a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A68u;
            // 0x190a6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a68) {
            ctx->pc = 0x190B2Cu;
            goto label_190b2c;
        }
    }
    ctx->pc = 0x190A70u;
label_190a70:
    // 0x190a70: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x190a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x190a74: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x190A74u;
    {
        const bool branch_taken_0x190a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A74u;
            // 0x190a78: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a74) {
            ctx->pc = 0x190AFCu;
            goto label_190afc;
        }
    }
    ctx->pc = 0x190A7Cu;
    // 0x190a7c: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x190A7Cu;
    {
        const bool branch_taken_0x190a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A7Cu;
            // 0x190a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a7c) {
            ctx->pc = 0x190AFCu;
            goto label_190afc;
        }
    }
    ctx->pc = 0x190A84u;
    // 0x190a84: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x190A84u;
    {
        const bool branch_taken_0x190a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A84u;
            // 0x190a88: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a84) {
            ctx->pc = 0x190AFCu;
            goto label_190afc;
        }
    }
    ctx->pc = 0x190A8Cu;
    // 0x190a8c: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x190A8Cu;
    {
        const bool branch_taken_0x190a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A8Cu;
            // 0x190a90: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a8c) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190A94u;
    // 0x190a94: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x190A94u;
    {
        const bool branch_taken_0x190a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A94u;
            // 0x190a98: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a94) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190A9Cu;
    // 0x190a9c: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x190A9Cu;
    {
        const bool branch_taken_0x190a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A9Cu;
            // 0x190aa0: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a9c) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190AA4u;
    // 0x190aa4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x190AA4u;
    {
        const bool branch_taken_0x190aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AA4u;
            // 0x190aa8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190aa4) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190AACu;
    // 0x190aac: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x190AACu;
    {
        const bool branch_taken_0x190aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AACu;
            // 0x190ab0: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190aac) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190AB4u;
    // 0x190ab4: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x190AB4u;
    {
        const bool branch_taken_0x190ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AB4u;
            // 0x190ab8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ab4) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190ABCu;
    // 0x190abc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190ABCu;
    {
        const bool branch_taken_0x190abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190ABCu;
            // 0x190ac0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190abc) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190AC4u;
    // 0x190ac4: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x190AC4u;
    {
        const bool branch_taken_0x190ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AC4u;
            // 0x190ac8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ac4) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190ACCu;
    // 0x190acc: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190ACCu;
    {
        const bool branch_taken_0x190acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x190acc) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190AD4u;
    // 0x190ad4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190AD4u;
    {
        const bool branch_taken_0x190ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ad4) {
            ctx->pc = 0x190AE4u;
            goto label_190ae4;
        }
    }
    ctx->pc = 0x190ADCu;
    // 0x190adc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x190ADCu;
    {
        const bool branch_taken_0x190adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190adc) {
            ctx->pc = 0x190B10u;
            goto label_190b10;
        }
    }
    ctx->pc = 0x190AE4u;
label_190ae4:
    // 0x190ae4: 0x0  nop
    ctx->pc = 0x190ae4u;
    // NOP
    // 0x190ae8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x190ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x190aec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190af0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x190af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x190af4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x190AF4u;
    {
        const bool branch_taken_0x190af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190AF4u;
            // 0x190af8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190af4) {
            ctx->pc = 0x190B10u;
            goto label_190b10;
        }
    }
    ctx->pc = 0x190AFCu;
label_190afc:
    // 0x190afc: 0x0  nop
    ctx->pc = 0x190afcu;
    // NOP
    // 0x190b00: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x190b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x190b04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190b08: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x190b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x190b0c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x190b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_190b10:
    // 0x190b10: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x190b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190b14: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x190b18: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x190b1c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x190b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190b20: 0xc0bb518  jal         func_2ED460
    ctx->pc = 0x190B20u;
    SET_GPR_U32(ctx, 31, 0x190B28u);
    ctx->pc = 0x190B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190B20u;
            // 0x190b24: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED460u;
    if (runtime->hasFunction(0x2ED460u)) {
        auto targetFn = runtime->lookupFunction(0x2ED460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B28u; }
        if (ctx->pc != 0x190B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterBtn__11CPadControlFiii_0x2ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B28u; }
        if (ctx->pc != 0x190B28u) { return; }
    }
    ctx->pc = 0x190B28u;
label_190b28:
    // 0x190b28: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x190b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_190b2c:
    // 0x190b2c: 0x0  nop
    ctx->pc = 0x190b2cu;
    // NOP
    // 0x190b30: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x190b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x190b34: 0x246351b0  addiu       $v1, $v1, 0x51B0
    ctx->pc = 0x190b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20912));
    // 0x190b38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x190b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x190b3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190b40: 0x481ffcb  bgez        $a0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x190B40u;
    {
        const bool branch_taken_0x190b40 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x190b40) {
            ctx->pc = 0x190A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190a70;
        }
    }
    ctx->pc = 0x190B48u;
    // 0x190b48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x190B48u;
    {
        const bool branch_taken_0x190b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B48u;
            // 0x190b4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b48) {
            ctx->pc = 0x190B64u;
            goto label_190b64;
        }
    }
    ctx->pc = 0x190B50u;
label_190b50:
    // 0x190b50: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x190b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190b54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x190b58: 0xc0bb528  jal         func_2ED4A0
    ctx->pc = 0x190B58u;
    SET_GPR_U32(ctx, 31, 0x190B60u);
    ctx->pc = 0x190B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190B58u;
            // 0x190b5c: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4A0u;
    if (runtime->hasFunction(0x2ED4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B60u; }
        if (ctx->pc != 0x190B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterAnalog__11CPadControlFii_0x2ed4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B60u; }
        if (ctx->pc != 0x190B60u) { return; }
    }
    ctx->pc = 0x190B60u;
label_190b60:
    // 0x190b60: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x190b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_190b64:
    // 0x190b64: 0x0  nop
    ctx->pc = 0x190b64u;
    // NOP
    // 0x190b68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x190b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x190b6c: 0x246353e0  addiu       $v1, $v1, 0x53E0
    ctx->pc = 0x190b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21472));
    // 0x190b70: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x190b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x190b74: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x190b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190b78: 0x4a1fff5  bgez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x190B78u;
    {
        const bool branch_taken_0x190b78 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x190b78) {
            ctx->pc = 0x190B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190b50;
        }
    }
    ctx->pc = 0x190B80u;
    // 0x190b80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x190B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B8Cu;
            // 0x190b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190B94u;
}
