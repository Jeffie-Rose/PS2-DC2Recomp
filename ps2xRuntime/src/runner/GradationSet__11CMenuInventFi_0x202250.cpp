#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GradationSet__11CMenuInventFi
// Address: 0x202250 - 0x20260c
void GradationSet__11CMenuInventFi_0x202250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GradationSet__11CMenuInventFi_0x202250");
#endif

    switch (ctx->pc) {
        case 0x2022c4u: goto label_2022c4;
        case 0x2022d4u: goto label_2022d4;
        case 0x2022e8u: goto label_2022e8;
        case 0x2022fcu: goto label_2022fc;
        case 0x202348u: goto label_202348;
        case 0x202358u: goto label_202358;
        case 0x202378u: goto label_202378;
        case 0x20238cu: goto label_20238c;
        case 0x2025bcu: goto label_2025bc;
        case 0x2025ccu: goto label_2025cc;
        default: break;
    }

    ctx->pc = 0x202250u;

    // 0x202250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202254: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x202254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202258: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x202258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20225c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x202260: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20226c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20226cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202270: 0x10a300de  beq         $a1, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x202270u;
    {
        const bool branch_taken_0x202270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x202274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202270u;
            // 0x202274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202270) {
            ctx->pc = 0x2025ECu;
            goto label_2025ec;
        }
    }
    ctx->pc = 0x202278u;
    // 0x202278: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20227c: 0x10a300c6  beq         $a1, $v1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x20227Cu;
    {
        const bool branch_taken_0x20227c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x202280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20227Cu;
            // 0x202280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20227c) {
            ctx->pc = 0x202598u;
            goto label_202598;
        }
    }
    ctx->pc = 0x202284u;
    // 0x202284: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x202284u;
    {
        const bool branch_taken_0x202284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x202284) {
            ctx->pc = 0x202320u;
            goto label_202320;
        }
    }
    ctx->pc = 0x20228Cu;
    // 0x20228c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20228Cu;
    {
        const bool branch_taken_0x20228c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20228c) {
            ctx->pc = 0x20229Cu;
            goto label_20229c;
        }
    }
    ctx->pc = 0x202294u;
    // 0x202294: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x202294u;
    {
        const bool branch_taken_0x202294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202294u;
            // 0x202298: 0xae050eac  sw          $a1, 0xEAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3756), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202294) {
            ctx->pc = 0x2025F0u;
            goto label_2025f0;
        }
    }
    ctx->pc = 0x20229Cu;
label_20229c:
    // 0x20229c: 0x8e130f18  lw          $s3, 0xF18($s0)
    ctx->pc = 0x20229cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3864)));
    // 0x2022a0: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2022A0u;
    {
        const bool branch_taken_0x2022a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2022a0) {
            ctx->pc = 0x202318u;
            goto label_202318;
        }
    }
    ctx->pc = 0x2022A8u;
    // 0x2022a8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2022a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2022ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2022acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022b0: 0xa2620055  sb          $v0, 0x55($s3)
    ctx->pc = 0x2022b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x2022b4: 0xa2620056  sb          $v0, 0x56($s3)
    ctx->pc = 0x2022b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x2022b8: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x2022b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x2022bc: 0xa2600058  sb          $zero, 0x58($s3)
    ctx->pc = 0x2022bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2022c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2022c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2022c4:
    // 0x2022c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2022c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2022c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022cc: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x2022CCu;
    SET_GPR_U32(ctx, 31, 0x2022D4u);
    ctx->pc = 0x2022D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2022CCu;
            // 0x2022d0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022D4u; }
        if (ctx->pc != 0x2022D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022D4u; }
        if (ctx->pc != 0x2022D4u) { return; }
    }
    ctx->pc = 0x2022D4u;
label_2022d4:
    // 0x2022d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2022d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2022d8: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2022d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2022dc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2022DCu;
    {
        const bool branch_taken_0x2022dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2022E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2022DCu;
            // 0x2022e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022dc) {
            ctx->pc = 0x2022C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2022c4;
        }
    }
    ctx->pc = 0x2022E4u;
    // 0x2022e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2022e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2022e8:
    // 0x2022e8: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x2022e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x2022ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2022ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2022f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2022f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2022f4: 0xc089664  jal         func_225990
    ctx->pc = 0x2022F4u;
    SET_GPR_U32(ctx, 31, 0x2022FCu);
    ctx->pc = 0x2022F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2022F4u;
            // 0x2022f8: 0x8e040f18  lw          $a0, 0xF18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022FCu; }
        if (ctx->pc != 0x2022FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022FCu; }
        if (ctx->pc != 0x2022FCu) { return; }
    }
    ctx->pc = 0x2022FCu;
label_2022fc:
    // 0x2022fc: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x202300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x202304: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x202304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x202308: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x202308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x20230c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x20230cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x202310: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x202310u;
    {
        const bool branch_taken_0x202310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202310u;
            // 0x202314: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202310) {
            ctx->pc = 0x2022E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2022e8;
        }
    }
    ctx->pc = 0x202318u;
label_202318:
    // 0x202318: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x202318u;
    {
        const bool branch_taken_0x202318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202318u;
            // 0x20231c: 0xae000eac  sw          $zero, 0xEAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202318) {
            ctx->pc = 0x2025F0u;
            goto label_2025f0;
        }
    }
    ctx->pc = 0x202320u;
label_202320:
    // 0x202320: 0x8e130f18  lw          $s3, 0xF18($s0)
    ctx->pc = 0x202320u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3864)));
    // 0x202324: 0x12600098  beqz        $s3, . + 4 + (0x98 << 2)
    ctx->pc = 0x202324u;
    {
        const bool branch_taken_0x202324 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x202324) {
            ctx->pc = 0x202588u;
            goto label_202588;
        }
    }
    ctx->pc = 0x20232Cu;
    // 0x20232c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x202330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202334: 0xa2620055  sb          $v0, 0x55($s3)
    ctx->pc = 0x202334u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x202338: 0xa2620056  sb          $v0, 0x56($s3)
    ctx->pc = 0x202338u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x20233c: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x20233cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x202340: 0xa2620058  sb          $v0, 0x58($s3)
    ctx->pc = 0x202340u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x202344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_202348:
    // 0x202348: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20234c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20234cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202350: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x202350u;
    SET_GPR_U32(ctx, 31, 0x202358u);
    ctx->pc = 0x202354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202350u;
            // 0x202354: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202358u; }
        if (ctx->pc != 0x202358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202358u; }
        if (ctx->pc != 0x202358u) { return; }
    }
    ctx->pc = 0x202358u;
label_202358:
    // 0x202358: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x202358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20235c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x20235cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x202360: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x202360u;
    {
        const bool branch_taken_0x202360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202360u;
            // 0x202364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202360) {
            ctx->pc = 0x202348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202348;
        }
    }
    ctx->pc = 0x202368u;
    // 0x202368: 0x878281d8  lh          $v0, -0x7E28($gp)
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935000)));
    // 0x20236c: 0x27a3005c  addiu       $v1, $sp, 0x5C
    ctx->pc = 0x20236cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x202370: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202374: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x202374u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_202378:
    // 0x202378: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x202378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x20237c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x202380: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202384: 0xc089664  jal         func_225990
    ctx->pc = 0x202384u;
    SET_GPR_U32(ctx, 31, 0x20238Cu);
    ctx->pc = 0x202388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202384u;
            // 0x202388: 0x8e040f18  lw          $a0, 0xF18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20238Cu; }
        if (ctx->pc != 0x20238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20238Cu; }
        if (ctx->pc != 0x20238Cu) { return; }
    }
    ctx->pc = 0x20238Cu;
label_20238c:
    // 0x20238c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x20238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x202390: 0x23d2021  addu        $a0, $s1, $sp
    ctx->pc = 0x202390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x202394: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x202394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x202398: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x202398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x20239c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20239cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2023a0: 0x8085005c  lb          $a1, 0x5C($a0)
    ctx->pc = 0x2023a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2023a4: 0x2463ee70  addiu       $v1, $v1, -0x1190
    ctx->pc = 0x2023a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962800));
    // 0x2023a8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2023a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2023ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2023acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2023b0: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2023b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2023b4: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x2023b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2023b8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2023B8u;
    {
        const bool branch_taken_0x2023b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2023BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2023B8u;
            // 0x2023bc: 0x8c470040  lw          $a3, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023b8) {
            ctx->pc = 0x2023CCu;
            goto label_2023cc;
        }
    }
    ctx->pc = 0x2023C0u;
    // 0x2023c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2023c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2023C4u;
    {
        const bool branch_taken_0x2023c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2023C4u;
            // 0x2023c8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023c4) {
            ctx->pc = 0x2023E8u;
            goto label_2023e8;
        }
    }
    ctx->pc = 0x2023CCu;
label_2023cc:
    // 0x2023cc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2023ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2023d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2023d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2023d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2023d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2023d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2023d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023dc: 0x0  nop
    ctx->pc = 0x2023dcu;
    // NOP
    // 0x2023e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2023e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2023e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2023e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2023e8:
    // 0x2023e8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2023e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2023ec: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2023ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2023f0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2023F0u;
    {
        const bool branch_taken_0x2023f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2023F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2023F0u;
            // 0x2023f4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023f0) {
            ctx->pc = 0x202404u;
            goto label_202404;
        }
    }
    ctx->pc = 0x2023F8u;
    // 0x2023f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2023f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2023FCu;
    {
        const bool branch_taken_0x2023fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2023FCu;
            // 0x202400: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023fc) {
            ctx->pc = 0x20241Cu;
            goto label_20241c;
        }
    }
    ctx->pc = 0x202404u;
label_202404:
    // 0x202404: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x202404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x202408: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x202408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20240c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20240cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202410: 0x0  nop
    ctx->pc = 0x202410u;
    // NOP
    // 0x202414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202418: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x202418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_20241c:
    // 0x20241c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20241cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x202420: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x202420u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x202424: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202424u;
    {
        const bool branch_taken_0x202424 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x202428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202424u;
            // 0x202428: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202424) {
            ctx->pc = 0x202438u;
            goto label_202438;
        }
    }
    ctx->pc = 0x20242Cu;
    // 0x20242c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20242cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202430: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x202430u;
    {
        const bool branch_taken_0x202430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202430u;
            // 0x202434: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202430) {
            ctx->pc = 0x202450u;
            goto label_202450;
        }
    }
    ctx->pc = 0x202438u;
label_202438:
    // 0x202438: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x202438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20243c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x20243cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x202440: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x202440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202444: 0x0  nop
    ctx->pc = 0x202444u;
    // NOP
    // 0x202448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20244c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20244cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_202450:
    // 0x202450: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x202450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x202454: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x202454u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x202458: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202458u;
    {
        const bool branch_taken_0x202458 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x20245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202458u;
            // 0x20245c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202458) {
            ctx->pc = 0x20246Cu;
            goto label_20246c;
        }
    }
    ctx->pc = 0x202460u;
    // 0x202460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202464: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x202464u;
    {
        const bool branch_taken_0x202464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202464u;
            // 0x202468: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202464) {
            ctx->pc = 0x202484u;
            goto label_202484;
        }
    }
    ctx->pc = 0x20246Cu;
label_20246c:
    // 0x20246c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20246cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x202470: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x202470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x202474: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x202474u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202478: 0x0  nop
    ctx->pc = 0x202478u;
    // NOP
    // 0x20247c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20247cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202480: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x202480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_202484:
    // 0x202484: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x202484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x202488: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x202488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20248c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x202490: 0x2463ee70  addiu       $v1, $v1, -0x1190
    ctx->pc = 0x202490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962800));
    // 0x202494: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202498: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x202498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x20249c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x20249cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2024a0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2024a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2024a4: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x2024a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2024a8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2024A8u;
    {
        const bool branch_taken_0x2024a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2024ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2024A8u;
            // 0x2024ac: 0x24860024  addiu       $a2, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024a8) {
            ctx->pc = 0x2024BCu;
            goto label_2024bc;
        }
    }
    ctx->pc = 0x2024B0u;
    // 0x2024b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2024b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2024B4u;
    {
        const bool branch_taken_0x2024b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2024B4u;
            // 0x2024b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024b4) {
            ctx->pc = 0x2024D8u;
            goto label_2024d8;
        }
    }
    ctx->pc = 0x2024BCu;
label_2024bc:
    // 0x2024bc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2024bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2024c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2024c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2024c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2024c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2024c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2024c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024cc: 0x0  nop
    ctx->pc = 0x2024ccu;
    // NOP
    // 0x2024d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2024d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2024d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2024d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2024d8:
    // 0x2024d8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2024d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2024dc: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2024dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2024e0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2024E0u;
    {
        const bool branch_taken_0x2024e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2024E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2024E0u;
            // 0x2024e4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024e0) {
            ctx->pc = 0x2024F4u;
            goto label_2024f4;
        }
    }
    ctx->pc = 0x2024E8u;
    // 0x2024e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2024e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2024ECu;
    {
        const bool branch_taken_0x2024ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2024ECu;
            // 0x2024f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024ec) {
            ctx->pc = 0x20250Cu;
            goto label_20250c;
        }
    }
    ctx->pc = 0x2024F4u;
label_2024f4:
    // 0x2024f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2024f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2024f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2024f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2024fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2024fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202500: 0x0  nop
    ctx->pc = 0x202500u;
    // NOP
    // 0x202504: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202508: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x202508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_20250c:
    // 0x20250c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x20250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x202510: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x202510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x202514: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202514u;
    {
        const bool branch_taken_0x202514 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x202518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202514u;
            // 0x202518: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202514) {
            ctx->pc = 0x202528u;
            goto label_202528;
        }
    }
    ctx->pc = 0x20251Cu;
    // 0x20251c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20251cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202520: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x202520u;
    {
        const bool branch_taken_0x202520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202520u;
            // 0x202524: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202520) {
            ctx->pc = 0x202540u;
            goto label_202540;
        }
    }
    ctx->pc = 0x202528u;
label_202528:
    // 0x202528: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x202528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20252c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x20252cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x202530: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x202530u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202534: 0x0  nop
    ctx->pc = 0x202534u;
    // NOP
    // 0x202538: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20253c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20253cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_202540:
    // 0x202540: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x202540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x202544: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x202544u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x202548: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202548u;
    {
        const bool branch_taken_0x202548 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x20254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202548u;
            // 0x20254c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202548) {
            ctx->pc = 0x20255Cu;
            goto label_20255c;
        }
    }
    ctx->pc = 0x202550u;
    // 0x202550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202554: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x202554u;
    {
        const bool branch_taken_0x202554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202554u;
            // 0x202558: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202554) {
            ctx->pc = 0x202574u;
            goto label_202574;
        }
    }
    ctx->pc = 0x20255Cu;
label_20255c:
    // 0x20255c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20255cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x202560: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x202560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x202564: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x202564u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202568: 0x0  nop
    ctx->pc = 0x202568u;
    // NOP
    // 0x20256c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20256cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202570: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x202570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_202574:
    // 0x202574: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x202578: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x202578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x20257c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x20257cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x202580: 0x1460ff7d  bnez        $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x202580u;
    {
        const bool branch_taken_0x202580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202580u;
            // 0x202584: 0xe4c00010  swc1        $f0, 0x10($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202580) {
            ctx->pc = 0x202378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202378;
        }
    }
    ctx->pc = 0x202588u;
label_202588:
    // 0x202588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20258c: 0xae030eac  sw          $v1, 0xEAC($s0)
    ctx->pc = 0x20258cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3756), GPR_U32(ctx, 3));
    // 0x202590: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x202590u;
    {
        const bool branch_taken_0x202590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202590u;
            // 0x202594: 0xae000eb0  sw          $zero, 0xEB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202590) {
            ctx->pc = 0x2025F0u;
            goto label_2025f0;
        }
    }
    ctx->pc = 0x202598u;
label_202598:
    // 0x202598: 0x8e120f18  lw          $s2, 0xF18($s0)
    ctx->pc = 0x202598u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3864)));
    // 0x20259c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x20259Cu;
    {
        const bool branch_taken_0x20259c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20259c) {
            ctx->pc = 0x2025DCu;
            goto label_2025dc;
        }
    }
    ctx->pc = 0x2025A4u;
    // 0x2025a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2025a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2025a8: 0xa2420055  sb          $v0, 0x55($s2)
    ctx->pc = 0x2025a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x2025ac: 0xa2420056  sb          $v0, 0x56($s2)
    ctx->pc = 0x2025acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x2025b0: 0xa2420057  sb          $v0, 0x57($s2)
    ctx->pc = 0x2025b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x2025b4: 0xa2420058  sb          $v0, 0x58($s2)
    ctx->pc = 0x2025b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x2025b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2025b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2025bc:
    // 0x2025bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2025bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2025c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025c4: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x2025C4u;
    SET_GPR_U32(ctx, 31, 0x2025CCu);
    ctx->pc = 0x2025C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2025C4u;
            // 0x2025c8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2025CCu; }
        if (ctx->pc != 0x2025CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2025CCu; }
        if (ctx->pc != 0x2025CCu) { return; }
    }
    ctx->pc = 0x2025CCu;
label_2025cc:
    // 0x2025cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2025ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2025d0: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2025d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2025d4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2025D4u;
    {
        const bool branch_taken_0x2025d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2025D4u;
            // 0x2025d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025d4) {
            ctx->pc = 0x2025BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2025bc;
        }
    }
    ctx->pc = 0x2025DCu;
label_2025dc:
    // 0x2025dc: 0x0  nop
    ctx->pc = 0x2025dcu;
    // NOP
    // 0x2025e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2025e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2025e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2025E4u;
    {
        const bool branch_taken_0x2025e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2025E4u;
            // 0x2025e8: 0xae030eac  sw          $v1, 0xEAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3756), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025e4) {
            ctx->pc = 0x2025F0u;
            goto label_2025f0;
        }
    }
    ctx->pc = 0x2025ECu;
label_2025ec:
    // 0x2025ec: 0xae030eac  sw          $v1, 0xEAC($s0)
    ctx->pc = 0x2025ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3756), GPR_U32(ctx, 3));
label_2025f0:
    // 0x2025f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2025f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2025f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2025f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2025f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2025f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2025fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2025fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202604: 0x3e00008  jr          $ra
    ctx->pc = 0x202604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202604u;
            // 0x202608: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20260Cu;
}
