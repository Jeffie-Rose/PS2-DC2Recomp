#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceCd_scmd_prechk
// Address: 0x120020 - 0x120190
void _sceCd_scmd_prechk_0x120020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_scmd_prechk_0x120020");
#endif

    switch (ctx->pc) {
        case 0x120040u: goto label_120040;
        case 0x12004cu: goto label_12004c;
        case 0x120078u: goto label_120078;
        case 0x12009cu: goto label_12009c;
        case 0x1200a4u: goto label_1200a4;
        case 0x1200b8u: goto label_1200b8;
        case 0x1200c8u: goto label_1200c8;
        case 0x1200e0u: goto label_1200e0;
        case 0x1200e8u: goto label_1200e8;
        case 0x120108u: goto label_120108;
        case 0x12011cu: goto label_12011c;
        case 0x120140u: goto label_120140;
        case 0x120148u: goto label_120148;
        default: break;
    }

    ctx->pc = 0x120020u;

    // 0x120020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x120024: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x120024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x120028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12002c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12002cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120030: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x120030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x120034: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x120034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x120038: 0xc047df6  jal         func_11F7D8
    ctx->pc = 0x120038u;
    SET_GPR_U32(ctx, 31, 0x120040u);
    ctx->pc = 0x12003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120038u;
            // 0x12003c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D8u;
    if (runtime->hasFunction(0x11F7D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120040u; }
        if (ctx->pc != 0x120040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cmd_sem_init_0x11f7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120040u; }
        if (ctx->pc != 0x120040u) { return; }
    }
    ctx->pc = 0x120040u;
label_120040:
    // 0x120040: 0x8e041dec  lw          $a0, 0x1DEC($s0)
    ctx->pc = 0x120040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7660)));
    // 0x120044: 0xc04404c  jal         func_110130
    ctx->pc = 0x120044u;
    SET_GPR_U32(ctx, 31, 0x12004Cu);
    ctx->pc = 0x110130u;
    if (runtime->hasFunction(0x110130u)) {
        auto targetFn = runtime->lookupFunction(0x110130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12004Cu; }
        if (ctx->pc != 0x12004Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PollSema_0x110130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12004Cu; }
        if (ctx->pc != 0x12004Cu) { return; }
    }
    ctx->pc = 0x12004Cu;
label_12004c:
    // 0x12004c: 0x8e031dec  lw          $v1, 0x1DEC($s0)
    ctx->pc = 0x12004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7660)));
    // 0x120050: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x120050u;
    {
        const bool branch_taken_0x120050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x120054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120050u;
            // 0x120054: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120050) {
            ctx->pc = 0x120080u;
            goto label_120080;
        }
    }
    ctx->pc = 0x120058u;
    // 0x120058: 0x8c431dd0  lw          $v1, 0x1DD0($v0)
    ctx->pc = 0x120058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7632)));
    // 0x12005c: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12005Cu;
    {
        const bool branch_taken_0x12005c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x120060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12005Cu;
            // 0x120060: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12005c) {
            ctx->pc = 0x1200B8u;
            goto label_1200b8;
        }
    }
    ctx->pc = 0x120064u;
    // 0x120064: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x120064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x120068: 0x8c461dd8  lw          $a2, 0x1DD8($v0)
    ctx->pc = 0x120068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7640)));
    // 0x12006c: 0x24841b20  addiu       $a0, $a0, 0x1B20
    ctx->pc = 0x12006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6944));
    // 0x120070: 0xc0448a6  jal         func_112298
    ctx->pc = 0x120070u;
    SET_GPR_U32(ctx, 31, 0x120078u);
    ctx->pc = 0x120074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120070u;
            // 0x120074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112298u;
    if (runtime->hasFunction(0x112298u)) {
        auto targetFn = runtime->lookupFunction(0x112298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120078u; }
        if (ctx->pc != 0x120078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120078u; }
        if (ctx->pc != 0x120078u) { return; }
    }
    ctx->pc = 0x120078u;
label_120078:
    // 0x120078: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x120078u;
    {
        const bool branch_taken_0x120078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12007Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120078u;
            // 0x12007c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120078) {
            ctx->pc = 0x120178u;
            goto label_120178;
        }
    }
    ctx->pc = 0x120080u;
label_120080:
    // 0x120080: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x120080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x120084: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x120084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x120088: 0x8c44e1d0  lw          $a0, -0x1E30($v0)
    ctx->pc = 0x120088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959568)));
    // 0x12008c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x12008cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x120090: 0xac711dd8  sw          $s1, 0x1DD8($v1)
    ctx->pc = 0x120090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7640), GPR_U32(ctx, 17));
    // 0x120094: 0xc043ff8  jal         func_10FFE0
    ctx->pc = 0x120094u;
    SET_GPR_U32(ctx, 31, 0x12009Cu);
    ctx->pc = 0x120098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120094u;
            // 0x120098: 0x24a5e1d8  addiu       $a1, $a1, -0x1E28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FFE0u;
    if (runtime->hasFunction(0x10FFE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12009Cu; }
        if (ctx->pc != 0x12009Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x10ffe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12009Cu; }
        if (ctx->pc != 0x12009Cu) { return; }
    }
    ctx->pc = 0x12009Cu;
label_12009c:
    // 0x12009c: 0xc047fec  jal         func_11FFB0
    ctx->pc = 0x12009Cu;
    SET_GPR_U32(ctx, 31, 0x1200A4u);
    ctx->pc = 0x1200A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12009Cu;
            // 0x1200a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FFB0u;
    if (runtime->hasFunction(0x11FFB0u)) {
        auto targetFn = runtime->lookupFunction(0x11FFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200A4u; }
        if (ctx->pc != 0x1200A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSyncS_0x11ffb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200A4u; }
        if (ctx->pc != 0x1200A4u) { return; }
    }
    ctx->pc = 0x1200A4u;
label_1200a4:
    // 0x1200a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1200A4u;
    {
        const bool branch_taken_0x1200a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1200A4u;
            // 0x1200a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200a4) {
            ctx->pc = 0x1200C0u;
            goto label_1200c0;
        }
    }
    ctx->pc = 0x1200ACu;
    // 0x1200ac: 0x8e041dec  lw          $a0, 0x1DEC($s0)
    ctx->pc = 0x1200acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7660)));
    // 0x1200b0: 0xc044040  jal         func_110100
    ctx->pc = 0x1200B0u;
    SET_GPR_U32(ctx, 31, 0x1200B8u);
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200B8u; }
        if (ctx->pc != 0x1200B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200B8u; }
        if (ctx->pc != 0x1200B8u) { return; }
    }
    ctx->pc = 0x1200B8u;
label_1200b8:
    // 0x1200b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1200B8u;
    {
        const bool branch_taken_0x1200b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1200B8u;
            // 0x1200bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200b8) {
            ctx->pc = 0x120178u;
            goto label_120178;
        }
    }
    ctx->pc = 0x1200C0u;
label_1200c0:
    // 0x1200c0: 0xc044a90  jal         func_112A40
    ctx->pc = 0x1200C0u;
    SET_GPR_U32(ctx, 31, 0x1200C8u);
    ctx->pc = 0x1200C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1200C0u;
            // 0x1200c4: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112A40u;
    if (runtime->hasFunction(0x112A40u)) {
        auto targetFn = runtime->lookupFunction(0x112A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200C8u; }
        if (ctx->pc != 0x1200C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x112a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1200C8u; }
        if (ctx->pc != 0x1200C8u) { return; }
    }
    ctx->pc = 0x1200C8u;
label_1200c8:
    // 0x1200c8: 0x8e421e08  lw          $v0, 0x1E08($s2)
    ctx->pc = 0x1200c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7688)));
    // 0x1200cc: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1200CCu;
    {
        const bool branch_taken_0x1200cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1200D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1200CCu;
            // 0x1200d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200cc) {
            ctx->pc = 0x120178u;
            goto label_120178;
        }
    }
    ctx->pc = 0x1200D4u;
    // 0x1200d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1200D4u;
    {
        const bool branch_taken_0x1200d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1200D4u;
            // 0x1200d8: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200d4) {
            ctx->pc = 0x120104u;
            goto label_120104;
        }
    }
    ctx->pc = 0x1200DCu;
    // 0x1200dc: 0x0  nop
    ctx->pc = 0x1200dcu;
    // NOP
label_1200e0:
    // 0x1200e0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1200e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1200e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1200e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1200e8:
    // 0x1200e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1200e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1200ec: 0x0  nop
    ctx->pc = 0x1200ecu;
    // NOP
    // 0x1200f0: 0x0  nop
    ctx->pc = 0x1200f0u;
    // NOP
    // 0x1200f4: 0x0  nop
    ctx->pc = 0x1200f4u;
    // NOP
    // 0x1200f8: 0x0  nop
    ctx->pc = 0x1200f8u;
    // NOP
    // 0x1200fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1200FCu;
    {
        const bool branch_taken_0x1200fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1200fc) {
            ctx->pc = 0x1200E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1200e8;
        }
    }
    ctx->pc = 0x120104u;
label_120104:
    // 0x120104: 0x26303808  addiu       $s0, $s1, 0x3808
    ctx->pc = 0x120104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14344));
label_120108:
    // 0x120108: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x120108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x12010c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12010cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120110: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x120110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x120114: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x120114u;
    SET_GPR_U32(ctx, 31, 0x12011Cu);
    ctx->pc = 0x120118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120114u;
            // 0x120118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (runtime->hasFunction(0x1130B0u)) {
        auto targetFn = runtime->lookupFunction(0x1130B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12011Cu; }
        if (ctx->pc != 0x12011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1130b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12011Cu; }
        if (ctx->pc != 0x12011Cu) { return; }
    }
    ctx->pc = 0x12011Cu;
label_12011c:
    // 0x12011c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12011Cu;
    {
        const bool branch_taken_0x12011c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12011c) {
            ctx->pc = 0x120120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12011Cu;
            // 0x120120: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12016Cu;
            goto label_12016c;
        }
    }
    ctx->pc = 0x120124u;
    // 0x120124: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x120124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x120128: 0x8c431dd0  lw          $v1, 0x1DD0($v0)
    ctx->pc = 0x120128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7632)));
    // 0x12012c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12012Cu;
    {
        const bool branch_taken_0x12012c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x120130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12012Cu;
            // 0x120130: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12012c) {
            ctx->pc = 0x120144u;
            goto label_120144;
        }
    }
    ctx->pc = 0x120134u;
    // 0x120134: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x120134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x120138: 0xc0448a6  jal         func_112298
    ctx->pc = 0x120138u;
    SET_GPR_U32(ctx, 31, 0x120140u);
    ctx->pc = 0x12013Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120138u;
            // 0x12013c: 0x24841b48  addiu       $a0, $a0, 0x1B48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112298u;
    if (runtime->hasFunction(0x112298u)) {
        auto targetFn = runtime->lookupFunction(0x112298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120140u; }
        if (ctx->pc != 0x120140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120140u; }
        if (ctx->pc != 0x120140u) { return; }
    }
    ctx->pc = 0x120140u;
label_120140:
    // 0x120140: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x120140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_120144:
    // 0x120144: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120148:
    // 0x120148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x120148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12014c: 0x0  nop
    ctx->pc = 0x12014cu;
    // NOP
    // 0x120150: 0x0  nop
    ctx->pc = 0x120150u;
    // NOP
    // 0x120154: 0x0  nop
    ctx->pc = 0x120154u;
    // NOP
    // 0x120158: 0x0  nop
    ctx->pc = 0x120158u;
    // NOP
    // 0x12015c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12015Cu;
    {
        const bool branch_taken_0x12015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12015c) {
            ctx->pc = 0x120148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120148;
        }
    }
    ctx->pc = 0x120164u;
    // 0x120164: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x120164u;
    {
        const bool branch_taken_0x120164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120164u;
            // 0x120168: 0x26303808  addiu       $s0, $s1, 0x3808 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120164) {
            ctx->pc = 0x120108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120108;
        }
    }
    ctx->pc = 0x12016Cu;
label_12016c:
    // 0x12016c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x12016Cu;
    {
        const bool branch_taken_0x12016c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12016Cu;
            // 0x120170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12016c) {
            ctx->pc = 0x1200E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1200e0;
        }
    }
    ctx->pc = 0x120174u;
    // 0x120174: 0xae401e08  sw          $zero, 0x1E08($s2)
    ctx->pc = 0x120174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7688), GPR_U32(ctx, 0));
label_120178:
    // 0x120178: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x120178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12017c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12017cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120180: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x120180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120188: 0x3e00008  jr          $ra
    ctx->pc = 0x120188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120188u;
            // 0x12018c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x120190u;
}
