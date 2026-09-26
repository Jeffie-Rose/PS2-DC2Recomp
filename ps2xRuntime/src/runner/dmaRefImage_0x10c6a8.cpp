#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dmaRefImage
// Address: 0x10c6a8 - 0x10c7fc
void dmaRefImage_0x10c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dmaRefImage_0x10c6a8");
#endif

    switch (ctx->pc) {
        case 0x10c708u: goto label_10c708;
        case 0x10c794u: goto label_10c794;
        default: break;
    }

    ctx->pc = 0x10c6a8u;

    // 0x10c6a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10c6ac: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x10c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10c6b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10c6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10c6b4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10c6b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c6bc: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10c6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x10c6c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10c6c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c6cc: 0x26448c40  addiu       $a0, $s2, -0x73C0
    ctx->pc = 0x10c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937664));
    // 0x10c6d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10c6d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10c6d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6d8: 0x8e180810  lw          $t8, 0x810($s0)
    ctx->pc = 0x10c6d8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x10c6dc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10c6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10c6e0: 0x3051818  mult        $v1, $t8, $a1
    ctx->pc = 0x10c6e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c6e4: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x10c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10c6e8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10c6ec: 0x8cac06bc  lw          $t4, 0x6BC($a1)
    ctx->pc = 0x10c6ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1724)));
    // 0x10c6f0: 0x19800025  blez        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x10C6F0u;
    {
        const bool branch_taken_0x10c6f0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x10C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C6F0u;
            // 0x10c6f4: 0x835825  or          $t3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6f0) {
            ctx->pc = 0x10C788u;
            goto label_10c788;
        }
    }
    ctx->pc = 0x10C6F8u;
    // 0x10c6f8: 0x260f0598  addiu       $t7, $s0, 0x598
    ctx->pc = 0x10c6f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1432));
    // 0x10c6fc: 0x260e05a8  addiu       $t6, $s0, 0x5A8
    ctx->pc = 0x10c6fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x10c700: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x10c700u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x10c704: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x10c704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_10c708:
    // 0x10c708: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x10c708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10c70c: 0x14d1026  xor         $v0, $t2, $t5
    ctx->pc = 0x10c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x10c710: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x10c710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c714: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x10c714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x10c718: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10c718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c71c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x10c71cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x10c720: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x10c720u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x10c724: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10c724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10c728: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x10c728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x10c72c: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x10c72cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x10c730: 0x35290030  ori         $t1, $t1, 0x30
    ctx->pc = 0x10c730u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)48);
    // 0x10c734: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c738: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x10c738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10c73c: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x10c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x10c740: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x10c740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x10c744: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c748: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x10c748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x10c74c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c750: 0x14c382a  slt         $a3, $t2, $t4
    ctx->pc = 0x10c750u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x10c754: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x10c754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10c758: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x10c758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x10c75c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10c75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10c760: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x10c760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x10c764: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c768: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x10c768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x10c76c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10c76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10c770: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x10c770u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x10c774: 0xfd630010  sd          $v1, 0x10($t3)
    ctx->pc = 0x10c774u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 3));
    // 0x10c778: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x10C778u;
    {
        const bool branch_taken_0x10c778 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C778u;
            // 0x10c77c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c778) {
            ctx->pc = 0x10C708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c708;
        }
    }
    ctx->pc = 0x10C780u;
    // 0x10c780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C780u;
    {
        const bool branch_taken_0x10c780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c780) {
            ctx->pc = 0x10C78Cu;
            goto label_10c78c;
        }
    }
    ctx->pc = 0x10C788u;
label_10c788:
    // 0x10c788: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x10c788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_10c78c:
    // 0x10c78c: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10C78Cu;
    SET_GPR_U32(ctx, 31, 0x10C794u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C794u; }
        if (ctx->pc != 0x10C794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C794u; }
        if (ctx->pc != 0x10C794u) { return; }
    }
    ctx->pc = 0x10C794u;
label_10c794:
    // 0x10c794: 0xf  sync
    ctx->pc = 0x10c794u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10c798: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x10c798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x10c79c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10c7a0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c7a4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c7a8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x10c7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c7ac: 0x34c6d480  ori         $a2, $a2, 0xD480
    ctx->pc = 0x10c7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54400);
    // 0x10c7b0: 0x26498c40  addiu       $t1, $s2, -0x73C0
    ctx->pc = 0x10c7b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937664));
    // 0x10c7b4: 0x34e7d430  ori         $a3, $a3, 0xD430
    ctx->pc = 0x10c7b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54320);
    // 0x10c7b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c7bc: 0x24080105  addiu       $t0, $zero, 0x105
    ctx->pc = 0x10c7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x10c7c0: 0x3442d420  ori         $v0, $v0, 0xD420
    ctx->pc = 0x10c7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54304);
    // 0x10c7c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10c7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c7c8: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x10c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x10c7cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10c7ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c7d0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x10c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10c7d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c7d8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x10c7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x10c7dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c7e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x10c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x10c7e4: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x10c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x10c7e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10c7ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c7f0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x10c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x10c7f4: 0x804630a  j           func_118C28
    ctx->pc = 0x10C7F4u;
    ctx->pc = 0x10C7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C7F4u;
            // 0x10c7f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x118c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C7FCu;
}
