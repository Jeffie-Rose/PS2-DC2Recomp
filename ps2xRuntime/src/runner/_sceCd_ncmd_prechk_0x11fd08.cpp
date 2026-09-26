#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceCd_ncmd_prechk
// Address: 0x11fd08 - 0x11fe78
void _sceCd_ncmd_prechk_0x11fd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_ncmd_prechk_0x11fd08");
#endif

    switch (ctx->pc) {
        case 0x11fd28u: goto label_11fd28;
        case 0x11fd34u: goto label_11fd34;
        case 0x11fd60u: goto label_11fd60;
        case 0x11fd84u: goto label_11fd84;
        case 0x11fd8cu: goto label_11fd8c;
        case 0x11fda0u: goto label_11fda0;
        case 0x11fdb0u: goto label_11fdb0;
        case 0x11fdc8u: goto label_11fdc8;
        case 0x11fdd0u: goto label_11fdd0;
        case 0x11fdf0u: goto label_11fdf0;
        case 0x11fe04u: goto label_11fe04;
        case 0x11fe28u: goto label_11fe28;
        case 0x11fe30u: goto label_11fe30;
        default: break;
    }

    ctx->pc = 0x11fd08u;

    // 0x11fd08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11fd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11fd0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11fd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11fd10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fd14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11fd14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11fd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11fd1c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11fd1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11fd20: 0xc047df6  jal         func_11F7D8
    ctx->pc = 0x11FD20u;
    SET_GPR_U32(ctx, 31, 0x11FD28u);
    ctx->pc = 0x11FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD20u;
            // 0x11fd24: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D8u;
    if (runtime->hasFunction(0x11F7D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD28u; }
        if (ctx->pc != 0x11FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cmd_sem_init_0x11f7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD28u; }
        if (ctx->pc != 0x11FD28u) { return; }
    }
    ctx->pc = 0x11FD28u;
label_11fd28:
    // 0x11fd28: 0x8e041de8  lw          $a0, 0x1DE8($s0)
    ctx->pc = 0x11fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x11fd2c: 0xc04404c  jal         func_110130
    ctx->pc = 0x11FD2Cu;
    SET_GPR_U32(ctx, 31, 0x11FD34u);
    ctx->pc = 0x110130u;
    if (runtime->hasFunction(0x110130u)) {
        auto targetFn = runtime->lookupFunction(0x110130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD34u; }
        if (ctx->pc != 0x11FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PollSema_0x110130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD34u; }
        if (ctx->pc != 0x11FD34u) { return; }
    }
    ctx->pc = 0x11FD34u;
label_11fd34:
    // 0x11fd34: 0x8e031de8  lw          $v1, 0x1DE8($s0)
    ctx->pc = 0x11fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x11fd38: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11FD38u;
    {
        const bool branch_taken_0x11fd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD38u;
            // 0x11fd3c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd38) {
            ctx->pc = 0x11FD68u;
            goto label_11fd68;
        }
    }
    ctx->pc = 0x11FD40u;
    // 0x11fd40: 0x8c431dd0  lw          $v1, 0x1DD0($v0)
    ctx->pc = 0x11fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7632)));
    // 0x11fd44: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11FD44u;
    {
        const bool branch_taken_0x11fd44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11FD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD44u;
            // 0x11fd48: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd44) {
            ctx->pc = 0x11FDA0u;
            goto label_11fda0;
        }
    }
    ctx->pc = 0x11FD4Cu;
    // 0x11fd4c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11fd50: 0x8c461ddc  lw          $a2, 0x1DDC($v0)
    ctx->pc = 0x11fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7644)));
    // 0x11fd54: 0x24841ac0  addiu       $a0, $a0, 0x1AC0
    ctx->pc = 0x11fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6848));
    // 0x11fd58: 0xc0448a6  jal         func_112298
    ctx->pc = 0x11FD58u;
    SET_GPR_U32(ctx, 31, 0x11FD60u);
    ctx->pc = 0x11FD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD58u;
            // 0x11fd5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112298u;
    if (runtime->hasFunction(0x112298u)) {
        auto targetFn = runtime->lookupFunction(0x112298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD60u; }
        if (ctx->pc != 0x11FD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD60u; }
        if (ctx->pc != 0x11FD60u) { return; }
    }
    ctx->pc = 0x11FD60u;
label_11fd60:
    // 0x11fd60: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11FD60u;
    {
        const bool branch_taken_0x11fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD60u;
            // 0x11fd64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd60) {
            ctx->pc = 0x11FE60u;
            goto label_11fe60;
        }
    }
    ctx->pc = 0x11FD68u;
label_11fd68:
    // 0x11fd68: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x11fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x11fd6c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11fd70: 0x8c44e1d0  lw          $a0, -0x1E30($v0)
    ctx->pc = 0x11fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959568)));
    // 0x11fd74: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x11fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x11fd78: 0xac711ddc  sw          $s1, 0x1DDC($v1)
    ctx->pc = 0x11fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7644), GPR_U32(ctx, 17));
    // 0x11fd7c: 0xc043ff8  jal         func_10FFE0
    ctx->pc = 0x11FD7Cu;
    SET_GPR_U32(ctx, 31, 0x11FD84u);
    ctx->pc = 0x11FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD7Cu;
            // 0x11fd80: 0x24a5e1d8  addiu       $a1, $a1, -0x1E28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FFE0u;
    if (runtime->hasFunction(0x10FFE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD84u; }
        if (ctx->pc != 0x11FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x10ffe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD84u; }
        if (ctx->pc != 0x11FD84u) { return; }
    }
    ctx->pc = 0x11FD84u;
label_11fd84:
    // 0x11fd84: 0xc047fc4  jal         func_11FF10
    ctx->pc = 0x11FD84u;
    SET_GPR_U32(ctx, 31, 0x11FD8Cu);
    ctx->pc = 0x11FD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD84u;
            // 0x11fd88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FF10u;
    if (runtime->hasFunction(0x11FF10u)) {
        auto targetFn = runtime->lookupFunction(0x11FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD8Cu; }
        if (ctx->pc != 0x11FD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x11ff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD8Cu; }
        if (ctx->pc != 0x11FD8Cu) { return; }
    }
    ctx->pc = 0x11FD8Cu;
label_11fd8c:
    // 0x11fd8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FD8Cu;
    {
        const bool branch_taken_0x11fd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD8Cu;
            // 0x11fd90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd8c) {
            ctx->pc = 0x11FDA8u;
            goto label_11fda8;
        }
    }
    ctx->pc = 0x11FD94u;
    // 0x11fd94: 0x8e041de8  lw          $a0, 0x1DE8($s0)
    ctx->pc = 0x11fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x11fd98: 0xc044040  jal         func_110100
    ctx->pc = 0x11FD98u;
    SET_GPR_U32(ctx, 31, 0x11FDA0u);
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDA0u; }
        if (ctx->pc != 0x11FDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDA0u; }
        if (ctx->pc != 0x11FDA0u) { return; }
    }
    ctx->pc = 0x11FDA0u;
label_11fda0:
    // 0x11fda0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11FDA0u;
    {
        const bool branch_taken_0x11fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDA0u;
            // 0x11fda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fda0) {
            ctx->pc = 0x11FE60u;
            goto label_11fe60;
        }
    }
    ctx->pc = 0x11FDA8u;
label_11fda8:
    // 0x11fda8: 0xc044a90  jal         func_112A40
    ctx->pc = 0x11FDA8u;
    SET_GPR_U32(ctx, 31, 0x11FDB0u);
    ctx->pc = 0x11FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDA8u;
            // 0x11fdac: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112A40u;
    if (runtime->hasFunction(0x112A40u)) {
        auto targetFn = runtime->lookupFunction(0x112A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDB0u; }
        if (ctx->pc != 0x11FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x112a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDB0u; }
        if (ctx->pc != 0x11FDB0u) { return; }
    }
    ctx->pc = 0x11FDB0u;
label_11fdb0:
    // 0x11fdb0: 0x8e421df8  lw          $v0, 0x1DF8($s2)
    ctx->pc = 0x11fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7672)));
    // 0x11fdb4: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11FDB4u;
    {
        const bool branch_taken_0x11fdb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDB4u;
            // 0x11fdb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdb4) {
            ctx->pc = 0x11FE60u;
            goto label_11fe60;
        }
    }
    ctx->pc = 0x11FDBCu;
    // 0x11fdbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11FDBCu;
    {
        const bool branch_taken_0x11fdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDBCu;
            // 0x11fdc0: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdbc) {
            ctx->pc = 0x11FDECu;
            goto label_11fdec;
        }
    }
    ctx->pc = 0x11FDC4u;
    // 0x11fdc4: 0x0  nop
    ctx->pc = 0x11fdc4u;
    // NOP
label_11fdc8:
    // 0x11fdc8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11fdcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11fdd0:
    // 0x11fdd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11fdd4: 0x0  nop
    ctx->pc = 0x11fdd4u;
    // NOP
    // 0x11fdd8: 0x0  nop
    ctx->pc = 0x11fdd8u;
    // NOP
    // 0x11fddc: 0x0  nop
    ctx->pc = 0x11fddcu;
    // NOP
    // 0x11fde0: 0x0  nop
    ctx->pc = 0x11fde0u;
    // NOP
    // 0x11fde4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FDE4u;
    {
        const bool branch_taken_0x11fde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11fde4) {
            ctx->pc = 0x11FDD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fdd0;
        }
    }
    ctx->pc = 0x11FDECu;
label_11fdec:
    // 0x11fdec: 0x26302f90  addiu       $s0, $s1, 0x2F90
    ctx->pc = 0x11fdecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12176));
label_11fdf0:
    // 0x11fdf0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11fdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdf8: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x11fdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x11fdfc: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x11FDFCu;
    SET_GPR_U32(ctx, 31, 0x11FE04u);
    ctx->pc = 0x11FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDFCu;
            // 0x11fe00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (runtime->hasFunction(0x1130B0u)) {
        auto targetFn = runtime->lookupFunction(0x1130B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE04u; }
        if (ctx->pc != 0x11FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1130b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE04u; }
        if (ctx->pc != 0x11FE04u) { return; }
    }
    ctx->pc = 0x11FE04u;
label_11fe04:
    // 0x11fe04: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11FE04u;
    {
        const bool branch_taken_0x11fe04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11fe04) {
            ctx->pc = 0x11FE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE04u;
            // 0x11fe08: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FE54u;
            goto label_11fe54;
        }
    }
    ctx->pc = 0x11FE0Cu;
    // 0x11fe0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11fe10: 0x8c431dd0  lw          $v1, 0x1DD0($v0)
    ctx->pc = 0x11fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7632)));
    // 0x11fe14: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FE14u;
    {
        const bool branch_taken_0x11fe14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE14u;
            // 0x11fe18: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe14) {
            ctx->pc = 0x11FE2Cu;
            goto label_11fe2c;
        }
    }
    ctx->pc = 0x11FE1Cu;
    // 0x11fe1c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11fe20: 0xc0448a6  jal         func_112298
    ctx->pc = 0x11FE20u;
    SET_GPR_U32(ctx, 31, 0x11FE28u);
    ctx->pc = 0x11FE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE20u;
            // 0x11fe24: 0x24841ae8  addiu       $a0, $a0, 0x1AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112298u;
    if (runtime->hasFunction(0x112298u)) {
        auto targetFn = runtime->lookupFunction(0x112298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE28u; }
        if (ctx->pc != 0x11FE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE28u; }
        if (ctx->pc != 0x11FE28u) { return; }
    }
    ctx->pc = 0x11FE28u;
label_11fe28:
    // 0x11fe28: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11fe2c:
    // 0x11fe2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11fe30:
    // 0x11fe30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11fe34: 0x0  nop
    ctx->pc = 0x11fe34u;
    // NOP
    // 0x11fe38: 0x0  nop
    ctx->pc = 0x11fe38u;
    // NOP
    // 0x11fe3c: 0x0  nop
    ctx->pc = 0x11fe3cu;
    // NOP
    // 0x11fe40: 0x0  nop
    ctx->pc = 0x11fe40u;
    // NOP
    // 0x11fe44: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FE44u;
    {
        const bool branch_taken_0x11fe44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11fe44) {
            ctx->pc = 0x11FE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fe30;
        }
    }
    ctx->pc = 0x11FE4Cu;
    // 0x11fe4c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11FE4Cu;
    {
        const bool branch_taken_0x11fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE4Cu;
            // 0x11fe50: 0x26302f90  addiu       $s0, $s1, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe4c) {
            ctx->pc = 0x11FDF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fdf0;
        }
    }
    ctx->pc = 0x11FE54u;
label_11fe54:
    // 0x11fe54: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11FE54u;
    {
        const bool branch_taken_0x11fe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE54u;
            // 0x11fe58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe54) {
            ctx->pc = 0x11FDC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fdc8;
        }
    }
    ctx->pc = 0x11FE5Cu;
    // 0x11fe5c: 0xae401df8  sw          $zero, 0x1DF8($s2)
    ctx->pc = 0x11fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7672), GPR_U32(ctx, 0));
label_11fe60:
    // 0x11fe60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11fe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fe64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11fe64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fe68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11fe68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fe6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11fe6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fe70: 0x3e00008  jr          $ra
    ctx->pc = 0x11FE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE70u;
            // 0x11fe74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11FE78u;
}
