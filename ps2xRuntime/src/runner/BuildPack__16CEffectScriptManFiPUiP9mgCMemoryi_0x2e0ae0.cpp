#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildPack__16CEffectScriptManFiPUiP9mgCMemoryi
// Address: 0x2e0ae0 - 0x2e0bf8
void BuildPack__16CEffectScriptManFiPUiP9mgCMemoryi_0x2e0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildPack__16CEffectScriptManFiPUiP9mgCMemoryi_0x2e0ae0");
#endif

    switch (ctx->pc) {
        case 0x2e0b1cu: goto label_2e0b1c;
        case 0x2e0b60u: goto label_2e0b60;
        case 0x2e0b78u: goto label_2e0b78;
        case 0x2e0b8cu: goto label_2e0b8c;
        case 0x2e0b9cu: goto label_2e0b9c;
        case 0x2e0bb0u: goto label_2e0bb0;
        case 0x2e0bd4u: goto label_2e0bd4;
        default: break;
    }

    ctx->pc = 0x2e0ae0u;

    // 0x2e0ae0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e0ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e0ae4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e0ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e0ae8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e0ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e0aec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e0af0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e0af0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0af4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0af8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e0af8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0afc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0b00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e0b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0b08: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e0b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b0c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e0b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e0b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b14: 0xc0b8b24  jal         func_2E2C90
    ctx->pc = 0x2E0B14u;
    SET_GPR_U32(ctx, 31, 0x2E0B1Cu);
    ctx->pc = 0x2E0B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B14u;
            // 0x2e0b18: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2C90u;
    if (runtime->hasFunction(0x2E2C90u)) {
        auto targetFn = runtime->lookupFunction(0x2E2C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B1Cu; }
        if (ctx->pc != 0x2E0B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffSptBaseDefPtr__Fi_0x2e2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B1Cu; }
        if (ctx->pc != 0x2E0B1Cu) { return; }
    }
    ctx->pc = 0x2E0B1Cu;
label_2e0b1c:
    // 0x2e0b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b20: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0B20u;
    {
        const bool branch_taken_0x2e0b20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B20u;
            // 0x2e0b24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b20) {
            ctx->pc = 0x2E0B30u;
            goto label_2e0b30;
        }
    }
    ctx->pc = 0x2E0B28u;
    // 0x2e0b28: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2E0B28u;
    {
        const bool branch_taken_0x2e0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B28u;
            // 0x2e0b2c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b28) {
            ctx->pc = 0x2E0BD8u;
            goto label_2e0bd8;
        }
    }
    ctx->pc = 0x2E0B30u;
label_2e0b30:
    // 0x2e0b30: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2e0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e0b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0b38: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0B38u;
    {
        const bool branch_taken_0x2e0b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E0B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B38u;
            // 0x2e0b3c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b38) {
            ctx->pc = 0x2E0B68u;
            goto label_2e0b68;
        }
    }
    ctx->pc = 0x2E0B40u;
    // 0x2e0b40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0B40u;
    {
        const bool branch_taken_0x2e0b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B40u;
            // 0x2e0b44: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b40) {
            ctx->pc = 0x2E0B50u;
            goto label_2e0b50;
        }
    }
    ctx->pc = 0x2E0B48u;
    // 0x2e0b48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E0B48u;
    {
        const bool branch_taken_0x2e0b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b48) {
            ctx->pc = 0x2E0B78u;
            goto label_2e0b78;
        }
    }
    ctx->pc = 0x2E0B50u;
label_2e0b50:
    // 0x2e0b50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e0b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e0b54: 0x24a510f0  addiu       $a1, $a1, 0x10F0
    ctx->pc = 0x2e0b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    // 0x2e0b58: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2E0B58u;
    SET_GPR_U32(ctx, 31, 0x2E0B60u);
    ctx->pc = 0x2E0B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B58u;
            // 0x2e0b5c: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B60u; }
        if (ctx->pc != 0x2E0B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B60u; }
        if (ctx->pc != 0x2E0B60u) { return; }
    }
    ctx->pc = 0x2E0B60u;
label_2e0b60:
    // 0x2e0b60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0B60u;
    {
        const bool branch_taken_0x2e0b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b60) {
            ctx->pc = 0x2E0B78u;
            goto label_2e0b78;
        }
    }
    ctx->pc = 0x2E0B68u;
label_2e0b68:
    // 0x2e0b68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e0b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e0b6c: 0x24a510f8  addiu       $a1, $a1, 0x10F8
    ctx->pc = 0x2e0b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4344));
    // 0x2e0b70: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2E0B70u;
    SET_GPR_U32(ctx, 31, 0x2E0B78u);
    ctx->pc = 0x2E0B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B70u;
            // 0x2e0b74: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B78u; }
        if (ctx->pc != 0x2E0B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B78u; }
        if (ctx->pc != 0x2E0B78u) { return; }
    }
    ctx->pc = 0x2E0B78u;
label_2e0b78:
    // 0x2e0b78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2e0b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2e0b7c: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x2e0b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x2e0b80: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e0b84: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2E0B84u;
    SET_GPR_U32(ctx, 31, 0x2E0B8Cu);
    ctx->pc = 0x2E0B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B84u;
            // 0x2e0b88: 0x24a51100  addiu       $a1, $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B8Cu; }
        if (ctx->pc != 0x2E0B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B8Cu; }
        if (ctx->pc != 0x2E0B8Cu) { return; }
    }
    ctx->pc = 0x2E0B8Cu;
label_2e0b8c:
    // 0x2e0b8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e0b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b90: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2e0b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e0b94: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2E0B94u;
    SET_GPR_U32(ctx, 31, 0x2E0B9Cu);
    ctx->pc = 0x2E0B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0B94u;
            // 0x2e0b98: 0x27a600b8  addiu       $a2, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B9Cu; }
        if (ctx->pc != 0x2E0B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0B9Cu; }
        if (ctx->pc != 0x2E0B9Cu) { return; }
    }
    ctx->pc = 0x2E0B9Cu;
label_2e0b9c:
    // 0x2e0b9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e0b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ba4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e0ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e0ba8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2E0BA8u;
    SET_GPR_U32(ctx, 31, 0x2E0BB0u);
    ctx->pc = 0x2E0BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0BA8u;
            // 0x2e0bac: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BB0u; }
        if (ctx->pc != 0x2E0BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BB0u; }
        if (ctx->pc != 0x2E0BB0u) { return; }
    }
    ctx->pc = 0x2E0BB0u;
label_2e0bb0:
    // 0x2e0bb0: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2e0bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2e0bb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e0bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bb8: 0x8fa900bc  lw          $t1, 0xBC($sp)
    ctx->pc = 0x2e0bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2e0bbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e0bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e0bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bc4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2e0bc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bc8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2e0bc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bcc: 0xc0b8108  jal         func_2E0420
    ctx->pc = 0x2E0BCCu;
    SET_GPR_U32(ctx, 31, 0x2E0BD4u);
    ctx->pc = 0x2E0BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0BCCu;
            // 0x2e0bd0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0420u;
    if (runtime->hasFunction(0x2E0420u)) {
        auto targetFn = runtime->lookupFunction(0x2E0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BD4u; }
        if (ctx->pc != 0x2E0BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildBase__16CEffectScriptManFiP1iP1iP9mgCMemoryi_0x2e0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0BD4u; }
        if (ctx->pc != 0x2E0BD4u) { return; }
    }
    ctx->pc = 0x2E0BD4u;
label_2e0bd4:
    // 0x2e0bd4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e0bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e0bd8:
    // 0x2e0bd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e0bd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0bdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e0bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0be0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0BF0u;
            // 0x2e0bf4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0BF8u;
}
