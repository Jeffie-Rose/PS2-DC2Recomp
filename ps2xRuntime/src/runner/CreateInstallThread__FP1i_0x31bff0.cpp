#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateInstallThread__FP1i
// Address: 0x31bff0 - 0x31c0fc
void CreateInstallThread__FP1i_0x31bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateInstallThread__FP1i_0x31bff0");
#endif

    switch (ctx->pc) {
        case 0x31c00cu: goto label_31c00c;
        case 0x31c0d0u: goto label_31c0d0;
        case 0x31c0e0u: goto label_31c0e0;
        case 0x31c0e8u: goto label_31c0e8;
        default: break;
    }

    ctx->pc = 0x31bff0u;

    // 0x31bff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31bff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31bff8: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x31bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x31bffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31bffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31c000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31c000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c004: 0xc05220c  jal         func_148830
    ctx->pc = 0x31C004u;
    SET_GPR_U32(ctx, 31, 0x31C00Cu);
    ctx->pc = 0x31C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C004u;
            // 0x31c008: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148830u;
    if (runtime->hasFunction(0x148830u)) {
        auto targetFn = runtime->lookupFunction(0x148830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C00Cu; }
        if (ctx->pc != 0x31C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFileHeader__FPiPi_0x148830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C00Cu; }
        if (ctx->pc != 0x31C00Cu) { return; }
    }
    ctx->pc = 0x31C00Cu;
label_31c00c:
    // 0x31c00c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31C00Cu;
    {
        const bool branch_taken_0x31c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C00Cu;
            // 0x31c010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c00c) {
            ctx->pc = 0x31C030u;
            goto label_31c030;
        }
    }
    ctx->pc = 0x31C014u;
    // 0x31c014: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31c018: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C018u;
    {
        const bool branch_taken_0x31c018 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x31c018) {
            ctx->pc = 0x31C02Cu;
            goto label_31c02c;
        }
    }
    ctx->pc = 0x31C020u;
    // 0x31c020: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x31c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x31c024: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C024u;
    {
        const bool branch_taken_0x31c024 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x31c024) {
            ctx->pc = 0x31C038u;
            goto label_31c038;
        }
    }
    ctx->pc = 0x31C02Cu;
label_31c02c:
    // 0x31c02c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31c02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31c030:
    // 0x31c030: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x31C030u;
    {
        const bool branch_taken_0x31c030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C030u;
            // 0x31c034: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c030) {
            ctx->pc = 0x31C0F0u;
            goto label_31c0f0;
        }
    }
    ctx->pc = 0x31C038u;
label_31c038:
    // 0x31c038: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C038u;
    {
        const bool branch_taken_0x31c038 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C038u;
            // 0x31c03c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c038) {
            ctx->pc = 0x31C048u;
            goto label_31c048;
        }
    }
    ctx->pc = 0x31C040u;
    // 0x31c040: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31C040u;
    {
        const bool branch_taken_0x31c040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c040) {
            ctx->pc = 0x31C0ECu;
            goto label_31c0ec;
        }
    }
    ctx->pc = 0x31C048u;
label_31c048:
    // 0x31c048: 0xaf90a3c4  sw          $s0, -0x5C3C($gp)
    ctx->pc = 0x31c048u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943684), GPR_U32(ctx, 16));
    // 0x31c04c: 0x8f83a3c4  lw          $v1, -0x5C3C($gp)
    ctx->pc = 0x31c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943684)));
    // 0x31c050: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x31c050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x31c054: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C054u;
    {
        const bool branch_taken_0x31c054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C054u;
            // 0x31c058: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c054) {
            ctx->pc = 0x31C070u;
            goto label_31c070;
        }
    }
    ctx->pc = 0x31C05Cu;
    // 0x31c05c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x31c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31c060: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31c060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31c064: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31c068: 0xaf82a3c4  sw          $v0, -0x5C3C($gp)
    ctx->pc = 0x31c068u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943684), GPR_U32(ctx, 2));
    // 0x31c06c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_31c070:
    // 0x31c070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c074: 0x34459000  ori         $a1, $v0, 0x9000
    ctx->pc = 0x31c074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x31c078: 0xaf83a3d8  sw          $v1, -0x5C28($gp)
    ctx->pc = 0x31c078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 3));
    // 0x31c07c: 0xaf83a3e0  sw          $v1, -0x5C20($gp)
    ctx->pc = 0x31c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943712), GPR_U32(ctx, 3));
    // 0x31c080: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x31c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x31c084: 0x2442c270  addiu       $v0, $v0, -0x3D90
    ctx->pc = 0x31c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951536));
    // 0x31c088: 0x8f83a3c4  lw          $v1, -0x5C3C($gp)
    ctx->pc = 0x31c088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943684)));
    // 0x31c08c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x31c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x31c090: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31c090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31c094: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x31c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31c098: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x31c098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x31c09c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x31c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x31c0a0: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x31c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x31c0a4: 0xaf80a3d0  sw          $zero, -0x5C30($gp)
    ctx->pc = 0x31c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943696), GPR_U32(ctx, 0));
    // 0x31c0a8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x31c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x31c0ac: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x31c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31c0b0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x31c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x31c0b4: 0xaf82a3cc  sw          $v0, -0x5C34($gp)
    ctx->pc = 0x31c0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943692), GPR_U32(ctx, 2));
    // 0x31c0b8: 0xaf80a3d4  sw          $zero, -0x5C2C($gp)
    ctx->pc = 0x31c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943700), GPR_U32(ctx, 0));
    // 0x31c0bc: 0xaf80a3dc  sw          $zero, -0x5C24($gp)
    ctx->pc = 0x31c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943708), GPR_U32(ctx, 0));
    // 0x31c0c0: 0xaf80a3e4  sw          $zero, -0x5C1C($gp)
    ctx->pc = 0x31c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943716), GPR_U32(ctx, 0));
    // 0x31c0c4: 0xaf80a3e8  sw          $zero, -0x5C18($gp)
    ctx->pc = 0x31c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943720), GPR_U32(ctx, 0));
    // 0x31c0c8: 0xc043fb8  jal         func_10FEE0
    ctx->pc = 0x31C0C8u;
    SET_GPR_U32(ctx, 31, 0x31C0D0u);
    ctx->pc = 0x31C0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C0C8u;
            // 0x31c0cc: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE0u;
    if (runtime->hasFunction(0x10FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0D0u; }
        if (ctx->pc != 0x31C0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0D0u; }
        if (ctx->pc != 0x31C0D0u) { return; }
    }
    ctx->pc = 0x31C0D0u;
label_31c0d0:
    // 0x31c0d0: 0xaf82a3c8  sw          $v0, -0x5C38($gp)
    ctx->pc = 0x31c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943688), GPR_U32(ctx, 2));
    // 0x31c0d4: 0x8f84a3c8  lw          $a0, -0x5C38($gp)
    ctx->pc = 0x31c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943688)));
    // 0x31c0d8: 0xc043fc0  jal         func_10FF00
    ctx->pc = 0x31C0D8u;
    SET_GPR_U32(ctx, 31, 0x31C0E0u);
    ctx->pc = 0x31C0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C0D8u;
            // 0x31c0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF00u;
    if (runtime->hasFunction(0x10FF00u)) {
        auto targetFn = runtime->lookupFunction(0x10FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0E0u; }
        if (ctx->pc != 0x31C0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0E0u; }
        if (ctx->pc != 0x31C0E0u) { return; }
    }
    ctx->pc = 0x31C0E0u;
label_31c0e0:
    // 0x31c0e0: 0xc0504a4  jal         func_141290
    ctx->pc = 0x31C0E0u;
    SET_GPR_U32(ctx, 31, 0x31C0E8u);
    ctx->pc = 0x31C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C0E0u;
            // 0x31c0e4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141290u;
    if (runtime->hasFunction(0x141290u)) {
        auto targetFn = runtime->lookupFunction(0x141290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0E8u; }
        if (ctx->pc != 0x31C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRotateThread__Fi_0x141290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C0E8u; }
        if (ctx->pc != 0x31C0E8u) { return; }
    }
    ctx->pc = 0x31C0E8u;
label_31c0e8:
    // 0x31c0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c0ec:
    // 0x31c0ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31c0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31c0f0:
    // 0x31c0f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31c0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C0F4u;
            // 0x31c0f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C0FCu;
}
