#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDonyShopLineUp__FPiPi
// Address: 0x2912f0 - 0x291440
void GetDonyShopLineUp__FPiPi_0x2912f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDonyShopLineUp__FPiPi_0x2912f0");
#endif

    switch (ctx->pc) {
        case 0x291328u: goto label_291328;
        case 0x291330u: goto label_291330;
        case 0x291354u: goto label_291354;
        case 0x291374u: goto label_291374;
        case 0x29137cu: goto label_29137c;
        default: break;
    }

    ctx->pc = 0x2912f0u;

    // 0x2912f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2912f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2912f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2912f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2912f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2912f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2912fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2912fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x291300: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x291300u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291304: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x291304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x291308: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x291308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29130c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29130cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291310: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x291310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x291314: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x291314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x291318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29131c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29131cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291320: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x291320u;
    SET_GPR_U32(ctx, 31, 0x291328u);
    ctx->pc = 0x291324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291320u;
            // 0x291324: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291328u; }
        if (ctx->pc != 0x291328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291328u; }
        if (ctx->pc != 0x291328u) { return; }
    }
    ctx->pc = 0x291328u;
label_291328:
    // 0x291328: 0xc08cab4  jal         func_232AD0
    ctx->pc = 0x291328u;
    SET_GPR_U32(ctx, 31, 0x291330u);
    ctx->pc = 0x29132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291328u;
            // 0x29132c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232AD0u;
    if (runtime->hasFunction(0x232AD0u)) {
        auto targetFn = runtime->lookupFunction(0x232AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291330u; }
        if (ctx->pc != 0x291330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuSysData__Fv_0x232ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291330u; }
        if (ctx->pc != 0x291330u) { return; }
    }
    ctx->pc = 0x291330u;
label_291330:
    // 0x291330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291334: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291334u;
    {
        const bool branch_taken_0x291334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291334u;
            // 0x291338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291334) {
            ctx->pc = 0x291344u;
            goto label_291344;
        }
    }
    ctx->pc = 0x29133Cu;
    // 0x29133c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29133Cu;
    {
        const bool branch_taken_0x29133c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x291340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29133Cu;
            // 0x291340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29133c) {
            ctx->pc = 0x29134Cu;
            goto label_29134c;
        }
    }
    ctx->pc = 0x291344u;
label_291344:
    // 0x291344: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x291344u;
    {
        const bool branch_taken_0x291344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291344u;
            // 0x291348: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291344) {
            ctx->pc = 0x291414u;
            goto label_291414;
        }
    }
    ctx->pc = 0x29134Cu;
label_29134c:
    // 0x29134c: 0xc07fc18  jal         func_1FF060
    ctx->pc = 0x29134Cu;
    SET_GPR_U32(ctx, 31, 0x291354u);
    ctx->pc = 0x1FF060u;
    if (runtime->hasFunction(0x1FF060u)) {
        auto targetFn = runtime->lookupFunction(0x1FF060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291354u; }
        if (ctx->pc != 0x291354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLevel__15CInventUserDataFv_0x1ff060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291354u; }
        if (ctx->pc != 0x291354u) { return; }
    }
    ctx->pc = 0x291354u;
label_291354:
    // 0x291354: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x291354u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x291358: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x291358u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29135c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29135cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291360: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x291360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291364: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x291364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291368: 0x26943ff0  addiu       $s4, $s4, 0x3FF0
    ctx->pc = 0x291368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16368));
    // 0x29136c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29136Cu;
    {
        const bool branch_taken_0x29136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29136Cu;
            // 0x291370: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29136c) {
            ctx->pc = 0x2913C4u;
            goto label_2913c4;
        }
    }
    ctx->pc = 0x291374u;
label_291374:
    // 0x291374: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x291374u;
    SET_GPR_U32(ctx, 31, 0x29137Cu);
    ctx->pc = 0x291378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291374u;
            // 0x291378: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1310u;
    if (runtime->hasFunction(0x2F1310u)) {
        auto targetFn = runtime->lookupFunction(0x2F1310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29137Cu; }
        if (ctx->pc != 0x29137Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGetAlready__15CMenuSystemDataFi_0x2f1310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29137Cu; }
        if (ctx->pc != 0x29137Cu) { return; }
    }
    ctx->pc = 0x29137Cu;
label_29137c:
    // 0x29137c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29137Cu;
    {
        const bool branch_taken_0x29137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29137c) {
            ctx->pc = 0x29138Cu;
            goto label_29138c;
        }
    }
    ctx->pc = 0x291384u;
    // 0x291384: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x291384u;
    {
        const bool branch_taken_0x291384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291384u;
            // 0x291388: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291384) {
            ctx->pc = 0x2913C0u;
            goto label_2913c0;
        }
    }
    ctx->pc = 0x29138Cu;
label_29138c:
    // 0x29138c: 0x0  nop
    ctx->pc = 0x29138cu;
    // NOP
    // 0x291390: 0x82820002  lb          $v0, 0x2($s4)
    ctx->pc = 0x291390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x291394: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x291394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x291398: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x291398u;
    {
        const bool branch_taken_0x291398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x291398) {
            ctx->pc = 0x2913C0u;
            goto label_2913c0;
        }
    }
    ctx->pc = 0x2913A0u;
    // 0x2913a0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2913A0u;
    {
        const bool branch_taken_0x2913a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2913a0) {
            ctx->pc = 0x2913B4u;
            goto label_2913b4;
        }
    }
    ctx->pc = 0x2913A8u;
    // 0x2913a8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2913a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2913ac: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x2913acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x2913b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2913b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2913b4:
    // 0x2913b4: 0x0  nop
    ctx->pc = 0x2913b4u;
    // NOP
    // 0x2913b8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2913b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2913bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2913bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2913c0:
    // 0x2913c0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2913c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2913c4:
    // 0x2913c4: 0x0  nop
    ctx->pc = 0x2913c4u;
    // NOP
    // 0x2913c8: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x2913c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2913cc: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x2913ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2913d0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2913D0u;
    {
        const bool branch_taken_0x2913d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2913D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913D0u;
            // 0x2913d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913d0) {
            ctx->pc = 0x291374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291374;
        }
    }
    ctx->pc = 0x2913D8u;
    // 0x2913d8: 0x13c0000d  beqz        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x2913D8u;
    {
        const bool branch_taken_0x2913d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2913DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913D8u;
            // 0x2913dc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913d8) {
            ctx->pc = 0x291410u;
            goto label_291410;
        }
    }
    ctx->pc = 0x2913E0u;
    // 0x2913e0: 0x16510003  bne         $s2, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2913E0u;
    {
        const bool branch_taken_0x2913e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x2913e0) {
            ctx->pc = 0x2913F0u;
            goto label_2913f0;
        }
    }
    ctx->pc = 0x2913E8u;
    // 0x2913e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2913E8u;
    {
        const bool branch_taken_0x2913e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2913ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913E8u;
            // 0x2913ec: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913e8) {
            ctx->pc = 0x29140Cu;
            goto label_29140c;
        }
    }
    ctx->pc = 0x2913F0u;
label_2913f0:
    // 0x2913f0: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2913F0u;
    {
        const bool branch_taken_0x2913f0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2913F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913F0u;
            // 0x2913f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913f0) {
            ctx->pc = 0x291400u;
            goto label_291400;
        }
    }
    ctx->pc = 0x2913F8u;
    // 0x2913f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2913F8u;
    {
        const bool branch_taken_0x2913f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2913FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913F8u;
            // 0x2913fc: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913f8) {
            ctx->pc = 0x29140Cu;
            goto label_29140c;
        }
    }
    ctx->pc = 0x291400u;
label_291400:
    // 0x291400: 0x16710002  bne         $s3, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x291400u;
    {
        const bool branch_taken_0x291400 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x291404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291400u;
            // 0x291404: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291400) {
            ctx->pc = 0x29140Cu;
            goto label_29140c;
        }
    }
    ctx->pc = 0x291408u;
    // 0x291408: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x291408u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_29140c:
    // 0x29140c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29140cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291410:
    // 0x291410: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x291410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_291414:
    // 0x291414: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x291414u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x291418: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x291418u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29141c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29141cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291420: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x291420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291424: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x291424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291428: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x291428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29142c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29142cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291438: 0x3e00008  jr          $ra
    ctx->pc = 0x291438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291438u;
            // 0x29143c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291440u;
}
