#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Analyze__9CEditDataFiiPii
// Address: 0x2a9ea0 - 0x2a9fcc
void Analyze__9CEditDataFiiPii_0x2a9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Analyze__9CEditDataFiiPii_0x2a9ea0");
#endif

    switch (ctx->pc) {
        case 0x2a9ef0u: goto label_2a9ef0;
        case 0x2a9f00u: goto label_2a9f00;
        case 0x2a9f30u: goto label_2a9f30;
        case 0x2a9f60u: goto label_2a9f60;
        default: break;
    }

    ctx->pc = 0x2a9ea0u;

label_2a9ea0:
    // 0x2a9ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a9ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a9ea4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a9ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a9ea8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a9ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2a9eac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a9eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a9eb0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2a9eb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9eb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a9eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a9eb8: 0x2bc10041  slti        $at, $fp, 0x41
    ctx->pc = 0x2a9eb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x2a9ebc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a9ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a9ec0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a9ec0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ec4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a9ec8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2a9ec8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ecc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a9ed0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2a9ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ed4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a9edc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9EDCu;
    {
        const bool branch_taken_0x2a9edc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9EDCu;
            // 0x2a9ee0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9edc) {
            ctx->pc = 0x2A9EF8u;
            goto label_2a9ef8;
        }
    }
    ctx->pc = 0x2A9EE4u;
    // 0x2a9ee4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a9ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a9ee8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2A9EE8u;
    SET_GPR_U32(ctx, 31, 0x2A9EF0u);
    ctx->pc = 0x2A9EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9EE8u;
            // 0x2a9eec: 0x2484e660  addiu       $a0, $a0, -0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9EF0u; }
        if (ctx->pc != 0x2A9EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9EF0u; }
        if (ctx->pc != 0x2A9EF0u) { return; }
    }
    ctx->pc = 0x2A9EF0u;
label_2a9ef0:
    // 0x2a9ef0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2A9EF0u;
    {
        const bool branch_taken_0x2a9ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9EF0u;
            // 0x2a9ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ef0) {
            ctx->pc = 0x2A9F9Cu;
            goto label_2a9f9c;
        }
    }
    ctx->pc = 0x2A9EF8u;
label_2a9ef8:
    // 0x2a9ef8: 0xc0aa238  jal         func_2A88E0
    ctx->pc = 0x2A9EF8u;
    SET_GPR_U32(ctx, 31, 0x2A9F00u);
    ctx->pc = 0x2A9EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9EF8u;
            // 0x2a9efc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A88E0u;
    if (runtime->hasFunction(0x2A88E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A88E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9F00u; }
        if (ctx->pc != 0x2A9F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeDataSrc__Fii_0x2a88e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9F00u; }
        if (ctx->pc != 0x2A9F00u) { return; }
    }
    ctx->pc = 0x2A9F00u;
label_2a9f00:
    // 0x2a9f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f04: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9F04u;
    {
        const bool branch_taken_0x2a9f04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F04u;
            // 0x2a9f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f04) {
            ctx->pc = 0x2A9F14u;
            goto label_2a9f14;
        }
    }
    ctx->pc = 0x2A9F0Cu;
    // 0x2a9f0c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2A9F0Cu;
    {
        const bool branch_taken_0x2a9f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F0Cu;
            // 0x2a9f10: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f0c) {
            ctx->pc = 0x2A9FA0u;
            goto label_2a9fa0;
        }
    }
    ctx->pc = 0x2A9F14u;
label_2a9f14:
    // 0x2a9f14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a9f18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9F18u;
    {
        const bool branch_taken_0x2a9f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F18u;
            // 0x2a9f1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f18) {
            ctx->pc = 0x2A9F28u;
            goto label_2a9f28;
        }
    }
    ctx->pc = 0x2A9F20u;
    // 0x2a9f20: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2A9F20u;
    {
        const bool branch_taken_0x2a9f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F20u;
            // 0x2a9f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f20) {
            ctx->pc = 0x2A9F9Cu;
            goto label_2a9f9c;
        }
    }
    ctx->pc = 0x2A9F28u;
label_2a9f28:
    // 0x2a9f28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a9f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f2c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2a9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2a9f30:
    // 0x2a9f30: 0x80530008  lb          $s3, 0x8($v0)
    ctx->pc = 0x2a9f30u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a9f34: 0x6600018  bltz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A9F34u;
    {
        const bool branch_taken_0x2a9f34 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2A9F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F34u;
            // 0x2a9f38: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f34) {
            ctx->pc = 0x2A9F98u;
            goto label_2a9f98;
        }
    }
    ctx->pc = 0x2A9F3Cu;
    // 0x2a9f3c: 0x2a2a021  addu        $s4, $s5, $v0
    ctx->pc = 0x2a9f3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2a9f40: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2a9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a9f44: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9F44u;
    {
        const bool branch_taken_0x2a9f44 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A9F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F44u;
            // 0x2a9f48: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f44) {
            ctx->pc = 0x2A9F70u;
            goto label_2a9f70;
        }
    }
    ctx->pc = 0x2A9F4Cu;
    // 0x2a9f4c: 0x27c80001  addiu       $t0, $fp, 0x1
    ctx->pc = 0x2a9f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2a9f50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a9f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f54: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a9f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9f58: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2A9F58u;
    SET_GPR_U32(ctx, 31, 0x2A9F60u);
    ctx->pc = 0x2A9F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F58u;
            // 0x2a9f5c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    goto label_2a9ea0;
    ctx->pc = 0x2A9F60u;
label_2a9f60:
    // 0x2a9f60: 0x2d32021  addu        $a0, $s6, $s3
    ctx->pc = 0x2a9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x2a9f64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9f68: 0xa0825050  sb          $v0, 0x5050($a0)
    ctx->pc = 0x2a9f68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20560), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a9f6c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2a9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_2a9f70:
    // 0x2a9f70: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x2a9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x2a9f74: 0x80425050  lb          $v0, 0x5050($v0)
    ctx->pc = 0x2a9f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20560)));
    // 0x2a9f78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9F78u;
    {
        const bool branch_taken_0x2a9f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F78u;
            // 0x2a9f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f78) {
            ctx->pc = 0x2A9F88u;
            goto label_2a9f88;
        }
    }
    ctx->pc = 0x2A9F80u;
    // 0x2a9f80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9F80u;
    {
        const bool branch_taken_0x2a9f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f80) {
            ctx->pc = 0x2A9F9Cu;
            goto label_2a9f9c;
        }
    }
    ctx->pc = 0x2A9F88u;
label_2a9f88:
    // 0x2a9f88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a9f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a9f8c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x2a9f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a9f90: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2A9F90u;
    {
        const bool branch_taken_0x2a9f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F90u;
            // 0x2a9f94: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f90) {
            ctx->pc = 0x2A9F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9f30;
        }
    }
    ctx->pc = 0x2A9F98u;
label_2a9f98:
    // 0x2a9f98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a9f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9f9c:
    // 0x2a9f9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a9f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a9fa0:
    // 0x2a9fa0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a9fa0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a9fa4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a9fa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a9fa8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a9fa8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9fac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a9facu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9fb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9fb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9fb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9fb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9FC4u;
            // 0x2a9fc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9FCCu;
}
