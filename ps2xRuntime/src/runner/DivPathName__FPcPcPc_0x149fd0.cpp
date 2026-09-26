#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DivPathName__FPcPcPc
// Address: 0x149fd0 - 0x14a10c
void DivPathName__FPcPcPc_0x149fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DivPathName__FPcPcPc_0x149fd0");
#endif

    switch (ctx->pc) {
        case 0x149ff4u: goto label_149ff4;
        case 0x14a004u: goto label_14a004;
        case 0x14a038u: goto label_14a038;
        case 0x14a05cu: goto label_14a05c;
        case 0x14a0bcu: goto label_14a0bc;
        case 0x14a0f4u: goto label_14a0f4;
        default: break;
    }

    ctx->pc = 0x149fd0u;

    // 0x149fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149fd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x149fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x149fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149fe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x149fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149fe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x149fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fec: 0xc04a422  jal         func_129088
    ctx->pc = 0x149FECu;
    SET_GPR_U32(ctx, 31, 0x149FF4u);
    ctx->pc = 0x149FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FECu;
            // 0x149ff0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FF4u; }
        if (ctx->pc != 0x149FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FF4u; }
        if (ctx->pc != 0x149FF4u) { return; }
    }
    ctx->pc = 0x149FF4u;
label_149ff4:
    // 0x149ff4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x149ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x149ff8: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149FF8u;
    {
        const bool branch_taken_0x149ff8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x149FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149FF8u;
            // 0x149ffc: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ff8) {
            ctx->pc = 0x14A01Cu;
            goto label_14a01c;
        }
    }
    ctx->pc = 0x14A000u;
    // 0x14a000: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x14a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_14a004:
    // 0x14a004: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x14a004u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a008: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A008u;
    {
        const bool branch_taken_0x14a008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a008) {
            ctx->pc = 0x14A01Cu;
            goto label_14a01c;
        }
    }
    ctx->pc = 0x14A010u;
    // 0x14a010: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14a014: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14A014u;
    {
        const bool branch_taken_0x14a014 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A014u;
            // 0x14a018: 0x2441821  addu        $v1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a014) {
            ctx->pc = 0x14A004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a004;
        }
    }
    ctx->pc = 0x14A01Cu;
label_14a01c:
    // 0x14a01c: 0x0  nop
    ctx->pc = 0x14a01cu;
    // NOP
    // 0x14a020: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A020u;
    {
        const bool branch_taken_0x14a020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A020u;
            // 0x14a024: 0x80082a  slt         $at, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a020) {
            ctx->pc = 0x14A040u;
            goto label_14a040;
        }
    }
    ctx->pc = 0x14A028u;
    // 0x14a028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a02c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14a02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a030: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x14A030u;
    SET_GPR_U32(ctx, 31, 0x14A038u);
    ctx->pc = 0x14A034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A030u;
            // 0x14a034: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A038u; }
        if (ctx->pc != 0x14A038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A038u; }
        if (ctx->pc != 0x14A038u) { return; }
    }
    ctx->pc = 0x14A038u;
label_14a038:
    // 0x14a038: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14A038u;
    {
        const bool branch_taken_0x14a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A038u;
            // 0x14a03c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a038) {
            ctx->pc = 0x14A0F8u;
            goto label_14a0f8;
        }
    }
    ctx->pc = 0x14A040u;
label_14a040:
    // 0x14a040: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x14a040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a044: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x14A044u;
    {
        const bool branch_taken_0x14a044 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A044u;
            // 0x14a048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a044) {
            ctx->pc = 0x14A0DCu;
            goto label_14a0dc;
        }
    }
    ctx->pc = 0x14A04Cu;
    // 0x14a04c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x14a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a050: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x14a050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x14a054: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A054u;
    {
        const bool branch_taken_0x14a054 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A054u;
            // 0x14a058: 0x2486fff8  addiu       $a2, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a054) {
            ctx->pc = 0x14A0B0u;
            goto label_14a0b0;
        }
    }
    ctx->pc = 0x14A05Cu;
label_14a05c:
    // 0x14a05c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x14a05cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a060: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x14a060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x14a064: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x14a064u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14a068: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x14a068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a06c: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x14a06cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x14a070: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x14a070u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a074: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x14a074u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14a078: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x14a078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a07c: 0x80620003  lb          $v0, 0x3($v1)
    ctx->pc = 0x14a07cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x14a080: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x14a080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a084: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x14a084u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14a088: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x14a088u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a08c: 0x80620005  lb          $v0, 0x5($v1)
    ctx->pc = 0x14a08cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x14a090: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x14a090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a094: 0x80620006  lb          $v0, 0x6($v1)
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x14a098: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x14a098u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a09c: 0x80620007  lb          $v0, 0x7($v1)
    ctx->pc = 0x14a09cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x14a0a0: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x14a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a0a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x14a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14a0a8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14A0A8u;
    {
        const bool branch_taken_0x14a0a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0A8u;
            // 0x14a0ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0a8) {
            ctx->pc = 0x14A05Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a05c;
        }
    }
    ctx->pc = 0x14A0B0u;
label_14a0b0:
    // 0x14a0b0: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x14a0b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14a0b4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A0B4u;
    {
        const bool branch_taken_0x14a0b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a0b4) {
            ctx->pc = 0x14A0DCu;
            goto label_14a0dc;
        }
    }
    ctx->pc = 0x14A0BCu;
label_14a0bc:
    // 0x14a0bc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x14a0bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14a0c4: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x14a0c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14a0c8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x14a0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a0cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a0d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14a0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14a0d4: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14A0D4u;
    {
        const bool branch_taken_0x14a0d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a0d4) {
            ctx->pc = 0x14A0BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a0bc;
        }
    }
    ctx->pc = 0x14A0DCu;
label_14a0dc:
    // 0x14a0dc: 0x0  nop
    ctx->pc = 0x14a0dcu;
    // NOP
    // 0x14a0e0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x14a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0e8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x14a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14a0ec: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x14A0ECu;
    SET_GPR_U32(ctx, 31, 0x14A0F4u);
    ctx->pc = 0x14A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0ECu;
            // 0x14a0f0: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0F4u; }
        if (ctx->pc != 0x14A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0F4u; }
        if (ctx->pc != 0x14A0F4u) { return; }
    }
    ctx->pc = 0x14A0F4u;
label_14a0f4:
    // 0x14a0f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14a0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14a0f8:
    // 0x14a0f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a104: 0x3e00008  jr          $ra
    ctx->pc = 0x14A104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A104u;
            // 0x14a108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A10Cu;
}
