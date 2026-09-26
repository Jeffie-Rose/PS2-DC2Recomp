#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearPlaceParts__4CMapFv
// Address: 0x15d350 - 0x15d414
void ClearPlaceParts__4CMapFv_0x15d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearPlaceParts__4CMapFv_0x15d350");
#endif

    switch (ctx->pc) {
        case 0x15d350u: goto label_15d350;
        case 0x15d354u: goto label_15d354;
        case 0x15d358u: goto label_15d358;
        case 0x15d35cu: goto label_15d35c;
        case 0x15d360u: goto label_15d360;
        case 0x15d364u: goto label_15d364;
        case 0x15d368u: goto label_15d368;
        case 0x15d36cu: goto label_15d36c;
        case 0x15d370u: goto label_15d370;
        case 0x15d374u: goto label_15d374;
        case 0x15d378u: goto label_15d378;
        case 0x15d37cu: goto label_15d37c;
        case 0x15d380u: goto label_15d380;
        case 0x15d384u: goto label_15d384;
        case 0x15d388u: goto label_15d388;
        case 0x15d38cu: goto label_15d38c;
        case 0x15d390u: goto label_15d390;
        case 0x15d394u: goto label_15d394;
        case 0x15d398u: goto label_15d398;
        case 0x15d39cu: goto label_15d39c;
        case 0x15d3a0u: goto label_15d3a0;
        case 0x15d3a4u: goto label_15d3a4;
        case 0x15d3a8u: goto label_15d3a8;
        case 0x15d3acu: goto label_15d3ac;
        case 0x15d3b0u: goto label_15d3b0;
        case 0x15d3b4u: goto label_15d3b4;
        case 0x15d3b8u: goto label_15d3b8;
        case 0x15d3bcu: goto label_15d3bc;
        case 0x15d3c0u: goto label_15d3c0;
        case 0x15d3c4u: goto label_15d3c4;
        case 0x15d3c8u: goto label_15d3c8;
        case 0x15d3ccu: goto label_15d3cc;
        case 0x15d3d0u: goto label_15d3d0;
        case 0x15d3d4u: goto label_15d3d4;
        case 0x15d3d8u: goto label_15d3d8;
        case 0x15d3dcu: goto label_15d3dc;
        case 0x15d3e0u: goto label_15d3e0;
        case 0x15d3e4u: goto label_15d3e4;
        case 0x15d3e8u: goto label_15d3e8;
        case 0x15d3ecu: goto label_15d3ec;
        case 0x15d3f0u: goto label_15d3f0;
        case 0x15d3f4u: goto label_15d3f4;
        case 0x15d3f8u: goto label_15d3f8;
        case 0x15d3fcu: goto label_15d3fc;
        case 0x15d400u: goto label_15d400;
        case 0x15d404u: goto label_15d404;
        case 0x15d408u: goto label_15d408;
        case 0x15d40cu: goto label_15d40c;
        case 0x15d410u: goto label_15d410;
        default: break;
    }

    ctx->pc = 0x15d350u;

label_15d350:
    // 0x15d350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15d354:
    // 0x15d354: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15d358:
    // 0x15d358: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15d35c:
    // 0x15d35c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15d360:
    // 0x15d360: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15d360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d364:
    // 0x15d364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15d368:
    // 0x15d368: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15d368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d36c:
    // 0x15d36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15d370:
    // 0x15d370: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d374:
    // 0x15d374: 0x8c830328  lw          $v1, 0x328($a0)
    ctx->pc = 0x15d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
label_15d378:
    // 0x15d378: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15d378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d37c:
    // 0x15d37c: 0x1000000d  b           . + 4 + (0xD << 2)
label_15d380:
    if (ctx->pc == 0x15D380u) {
        ctx->pc = 0x15D380u;
            // 0x15d380: 0xac830330  sw          $v1, 0x330($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 816), GPR_U32(ctx, 3));
        ctx->pc = 0x15D384u;
        goto label_15d384;
    }
    ctx->pc = 0x15D37Cu;
    {
        const bool branch_taken_0x15d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D37Cu;
            // 0x15d380: 0xac830330  sw          $v1, 0x330($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d37c) {
            ctx->pc = 0x15D3B4u;
            goto label_15d3b4;
        }
    }
    ctx->pc = 0x15D384u;
label_15d384:
    // 0x15d384: 0x8e62032c  lw          $v0, 0x32C($s3)
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 812)));
label_15d388:
    // 0x15d388: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_15d38c:
    // 0x15d38c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d390:
    // 0x15d390: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x15d390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_15d394:
    // 0x15d394: 0x320f809  jalr        $t9
label_15d398:
    if (ctx->pc == 0x15D398u) {
        ctx->pc = 0x15D39Cu;
        goto label_15d39c;
    }
    ctx->pc = 0x15D394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D39Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D39Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D39Cu; }
            if (ctx->pc != 0x15D39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15D39Cu;
label_15d39c:
    // 0x15d39c: 0x8e630364  lw          $v1, 0x364($s3)
    ctx->pc = 0x15d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 868)));
label_15d3a0:
    // 0x15d3a0: 0x26310310  addiu       $s1, $s1, 0x310
    ctx->pc = 0x15d3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_15d3a4:
    // 0x15d3a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d3a8:
    // 0x15d3a8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15d3ac:
    // 0x15d3ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_15d3b0:
    // 0x15d3b0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15d3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15d3b4:
    // 0x15d3b4: 0x0  nop
    ctx->pc = 0x15d3b4u;
    // NOP
label_15d3b8:
    // 0x15d3b8: 0x8e630328  lw          $v1, 0x328($s3)
    ctx->pc = 0x15d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 808)));
label_15d3bc:
    // 0x15d3bc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x15d3bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15d3c0:
    // 0x15d3c0: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_15d3c4:
    if (ctx->pc == 0x15D3C4u) {
        ctx->pc = 0x15D3C8u;
        goto label_15d3c8;
    }
    ctx->pc = 0x15D3C0u;
    {
        const bool branch_taken_0x15d3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d3c0) {
            ctx->pc = 0x15D384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d384;
        }
    }
    ctx->pc = 0x15D3C8u;
label_15d3c8:
    // 0x15d3c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15d3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d3cc:
    // 0x15d3cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_15d3d0:
    if (ctx->pc == 0x15D3D0u) {
        ctx->pc = 0x15D3D0u;
            // 0x15d3d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D3D4u;
        goto label_15d3d4;
    }
    ctx->pc = 0x15D3CCu;
    {
        const bool branch_taken_0x15d3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3CCu;
            // 0x15d3d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3cc) {
            ctx->pc = 0x15D3E8u;
            goto label_15d3e8;
        }
    }
    ctx->pc = 0x15D3D4u;
label_15d3d4:
    // 0x15d3d4: 0x8e620cf8  lw          $v0, 0xCF8($s3)
    ctx->pc = 0x15d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3320)));
label_15d3d8:
    // 0x15d3d8: 0xc05716c  jal         func_15C5B0
label_15d3dc:
    if (ctx->pc == 0x15D3DCu) {
        ctx->pc = 0x15D3DCu;
            // 0x15d3dc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x15D3E0u;
        goto label_15d3e0;
    }
    ctx->pc = 0x15D3D8u;
    SET_GPR_U32(ctx, 31, 0x15D3E0u);
    ctx->pc = 0x15D3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3D8u;
            // 0x15d3dc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C5B0u;
    if (runtime->hasFunction(0x15C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3E0u; }
        if (ctx->pc != 0x15D3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__9CMapWaterFv_0x15c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3E0u; }
        if (ctx->pc != 0x15D3E0u) { return; }
    }
    ctx->pc = 0x15D3E0u;
label_15d3e0:
    // 0x15d3e0: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x15d3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_15d3e4:
    // 0x15d3e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d3e8:
    // 0x15d3e8: 0x8e630cf4  lw          $v1, 0xCF4($s3)
    ctx->pc = 0x15d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3316)));
label_15d3ec:
    // 0x15d3ec: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x15d3ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15d3f0:
    // 0x15d3f0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_15d3f4:
    if (ctx->pc == 0x15D3F4u) {
        ctx->pc = 0x15D3F8u;
        goto label_15d3f8;
    }
    ctx->pc = 0x15D3F0u;
    {
        const bool branch_taken_0x15d3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d3f0) {
            ctx->pc = 0x15D3D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d3d4;
        }
    }
    ctx->pc = 0x15D3F8u;
label_15d3f8:
    // 0x15d3f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15d3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15d3fc:
    // 0x15d3fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d3fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d400:
    // 0x15d400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d404:
    // 0x15d404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d408:
    // 0x15d408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15d40c:
    // 0x15d40c: 0x3e00008  jr          $ra
label_15d410:
    if (ctx->pc == 0x15D410u) {
        ctx->pc = 0x15D410u;
            // 0x15d410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x15D414u;
        goto label_fallthrough_0x15d40c;
    }
    ctx->pc = 0x15D40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D40Cu;
            // 0x15d410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15d40c:
    ctx->pc = 0x15D414u;
}
