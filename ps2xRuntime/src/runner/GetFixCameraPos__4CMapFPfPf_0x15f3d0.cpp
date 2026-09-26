#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFixCameraPos__4CMapFPfPf
// Address: 0x15f3d0 - 0x15f724
void GetFixCameraPos__4CMapFPfPf_0x15f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFixCameraPos__4CMapFPfPf_0x15f3d0");
#endif

    switch (ctx->pc) {
        case 0x15f424u: goto label_15f424;
        case 0x15f454u: goto label_15f454;
        case 0x15f45cu: goto label_15f45c;
        case 0x15f478u: goto label_15f478;
        case 0x15f4ecu: goto label_15f4ec;
        case 0x15f50cu: goto label_15f50c;
        case 0x15f51cu: goto label_15f51c;
        case 0x15f524u: goto label_15f524;
        case 0x15f534u: goto label_15f534;
        case 0x15f584u: goto label_15f584;
        case 0x15f590u: goto label_15f590;
        case 0x15f5a8u: goto label_15f5a8;
        case 0x15f5b8u: goto label_15f5b8;
        case 0x15f5fcu: goto label_15f5fc;
        case 0x15f60cu: goto label_15f60c;
        case 0x15f61cu: goto label_15f61c;
        case 0x15f65cu: goto label_15f65c;
        case 0x15f670u: goto label_15f670;
        case 0x15f68cu: goto label_15f68c;
        case 0x15f69cu: goto label_15f69c;
        default: break;
    }

    ctx->pc = 0x15f3d0u;

    // 0x15f3d0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x15f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x15f3d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x15f3d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x15f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x15f3dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x15f3e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15f3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x15f3e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x15f3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x15f3e8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15f3e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15f3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x15f3f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15f3f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15f3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15f3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15f400: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15f400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15f404: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15f404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15f408: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15f408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f40c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f410: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x15f410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x15f414: 0x8c940c84  lw          $s4, 0xC84($a0)
    ctx->pc = 0x15f414u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3204)));
    // 0x15f418: 0x8ec30c80  lw          $v1, 0xC80($s6)
    ctx->pc = 0x15f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3200)));
    // 0x15f41c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15F41Cu;
    {
        const bool branch_taken_0x15f41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F41Cu;
            // 0x15f420: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f41c) {
            ctx->pc = 0x15F440u;
            goto label_15f440;
        }
    }
    ctx->pc = 0x15F424u;
label_15f424:
    // 0x15f424: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x15f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x15f428: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15F428u;
    {
        const bool branch_taken_0x15f428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f428) {
            ctx->pc = 0x15F434u;
            goto label_15f434;
        }
    }
    ctx->pc = 0x15F430u;
    // 0x15f430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15f430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f434:
    // 0x15f434: 0x0  nop
    ctx->pc = 0x15f434u;
    // NOP
    // 0x15f438: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15f43c: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x15f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_15f440:
    // 0x15f440: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x15f440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15f444: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15F444u;
    {
        const bool branch_taken_0x15f444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F444u;
            // 0x15f448: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f444) {
            ctx->pc = 0x15F424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f424;
        }
    }
    ctx->pc = 0x15F44Cu;
    // 0x15f44c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15F44Cu;
    {
        const bool branch_taken_0x15f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f44c) {
            ctx->pc = 0x15F4A8u;
            goto label_15f4a8;
        }
    }
    ctx->pc = 0x15F454u;
label_15f454:
    // 0x15f454: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15F454u;
    {
        const bool branch_taken_0x15f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F454u;
            // 0x15f458: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f454) {
            ctx->pc = 0x15F490u;
            goto label_15f490;
        }
    }
    ctx->pc = 0x15F45Cu;
label_15f45c:
    // 0x15f45c: 0x0  nop
    ctx->pc = 0x15f45cu;
    // NOP
    // 0x15f460: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x15f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x15f464: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x15f468: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x15F468u;
    {
        const bool branch_taken_0x15f468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F468u;
            // 0x15f46c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f468) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F470u;
    // 0x15f470: 0xc051eb0  jal         func_147AC0
    ctx->pc = 0x15F470u;
    SET_GPR_U32(ctx, 31, 0x15F478u);
    ctx->pc = 0x147AC0u;
    if (runtime->hasFunction(0x147AC0u)) {
        auto targetFn = runtime->lookupFunction(0x147AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F478u; }
        if (ctx->pc != 0x15F478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InsidePoint__9CColFrameFPf_0x147ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F478u; }
        if (ctx->pc != 0x15F478u) { return; }
    }
    ctx->pc = 0x15F478u;
label_15f478:
    // 0x15f478: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15F478u;
    {
        const bool branch_taken_0x15f478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f478) {
            ctx->pc = 0x15F484u;
            goto label_15f484;
        }
    }
    ctx->pc = 0x15F480u;
    // 0x15f480: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x15f480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15f484:
    // 0x15f484: 0x0  nop
    ctx->pc = 0x15f484u;
    // NOP
    // 0x15f488: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x15f48c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15f48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15f490:
    // 0x15f490: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15f494: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15f494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15f498: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15F498u;
    {
        const bool branch_taken_0x15f498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f498) {
            ctx->pc = 0x15F45Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f45c;
        }
    }
    ctx->pc = 0x15F4A0u;
label_15f4a0:
    // 0x15f4a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15f4a4: 0x269400d0  addiu       $s4, $s4, 0xD0
    ctx->pc = 0x15f4a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
label_15f4a8:
    // 0x15f4a8: 0x8ec20c80  lw          $v0, 0xC80($s6)
    ctx->pc = 0x15f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3200)));
    // 0x15f4ac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x15f4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15f4b0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x15F4B0u;
    {
        const bool branch_taken_0x15f4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4B0u;
            // 0x15f4b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4b0) {
            ctx->pc = 0x15F454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f454;
        }
    }
    ctx->pc = 0x15F4B8u;
    // 0x15f4b8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F4B8u;
    {
        const bool branch_taken_0x15f4b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4B8u;
            // 0x15f4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4b8) {
            ctx->pc = 0x15F4C8u;
            goto label_15f4c8;
        }
    }
    ctx->pc = 0x15F4C0u;
    // 0x15f4c0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x15F4C0u;
    {
        const bool branch_taken_0x15f4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4C0u;
            // 0x15f4c4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4c0) {
            ctx->pc = 0x15F6F4u;
            goto label_15f6f4;
        }
    }
    ctx->pc = 0x15F4C8u;
label_15f4c8:
    // 0x15f4c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f4cc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15f4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15f4d0: 0x14200083  bnez        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x15F4D0u;
    {
        const bool branch_taken_0x15f4d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4D0u;
            // 0x15f4d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4d0) {
            ctx->pc = 0x15F6E0u;
            goto label_15f6e0;
        }
    }
    ctx->pc = 0x15F4D8u;
    // 0x15f4d8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x15f4d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f4dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15f4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4e0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x15f4e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4e4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x15F4E4u;
    {
        const bool branch_taken_0x15f4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4E4u;
            // 0x15f4e8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4e4) {
            ctx->pc = 0x15F5E0u;
            goto label_15f5e0;
        }
    }
    ctx->pc = 0x15F4ECu;
label_15f4ec:
    // 0x15f4ec: 0x21e1021  addu        $v0, $s0, $fp
    ctx->pc = 0x15f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x15f4f0: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x15f4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15f4f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15f4f8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15f4fc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x15f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x15f500: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x15f500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15f504: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x15F504u;
    SET_GPR_U32(ctx, 31, 0x15F50Cu);
    ctx->pc = 0x15F508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F504u;
            // 0x15f508: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F50Cu; }
        if (ctx->pc != 0x15F50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F50Cu; }
        if (ctx->pc != 0x15F50Cu) { return; }
    }
    ctx->pc = 0x15F50Cu;
label_15f50c:
    // 0x15f50c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x15f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x15f510: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15f510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f514: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x15F514u;
    SET_GPR_U32(ctx, 31, 0x15F51Cu);
    ctx->pc = 0x15F518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F514u;
            // 0x15f518: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F51Cu; }
        if (ctx->pc != 0x15F51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F51Cu; }
        if (ctx->pc != 0x15F51Cu) { return; }
    }
    ctx->pc = 0x15F51Cu;
label_15f51c:
    // 0x15f51c: 0xc04c00c  jal         func_130030
    ctx->pc = 0x15F51Cu;
    SET_GPR_U32(ctx, 31, 0x15F524u);
    ctx->pc = 0x15F520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F51Cu;
            // 0x15f520: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130030u;
    if (runtime->hasFunction(0x130030u)) {
        auto targetFn = runtime->lookupFunction(0x130030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F524u; }
        if (ctx->pc != 0x15F524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPf_0x130030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F524u; }
        if (ctx->pc != 0x15F524u) { return; }
    }
    ctx->pc = 0x15F524u;
label_15f524:
    // 0x15f524: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15f524u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15f528: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x15f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x15f52c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x15F52Cu;
    SET_GPR_U32(ctx, 31, 0x15F534u);
    ctx->pc = 0x15F530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F52Cu;
            // 0x15f530: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F534u; }
        if (ctx->pc != 0x15F534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F534u; }
        if (ctx->pc != 0x15F534u) { return; }
    }
    ctx->pc = 0x15F534u;
label_15f534:
    // 0x15f534: 0x0  nop
    ctx->pc = 0x15f534u;
    // NOP
    // 0x15f538: 0x0  nop
    ctx->pc = 0x15f538u;
    // NOP
    // 0x15f53c: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x15f53cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x15f540: 0x0  nop
    ctx->pc = 0x15f540u;
    // NOP
    // 0x15f544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f548: 0x0  nop
    ctx->pc = 0x15f548u;
    // NOP
    // 0x15f54c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x15f54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f550: 0x0  nop
    ctx->pc = 0x15f550u;
    // NOP
    // 0x15f554: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x15F554u;
    {
        const bool branch_taken_0x15f554 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F554u;
            // 0x15f558: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f554) {
            ctx->pc = 0x15F5D8u;
            goto label_15f5d8;
        }
    }
    ctx->pc = 0x15F55Cu;
    // 0x15f55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f560: 0x0  nop
    ctx->pc = 0x15f560u;
    // NOP
    // 0x15f564: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x15f564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f568: 0x0  nop
    ctx->pc = 0x15f568u;
    // NOP
    // 0x15f56c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x15F56Cu;
    {
        const bool branch_taken_0x15f56c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F56Cu;
            // 0x15f570: 0x2fd1021  addu        $v0, $s7, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f56c) {
            ctx->pc = 0x15F5D8u;
            goto label_15f5d8;
        }
    }
    ctx->pc = 0x15F574u;
    // 0x15f574: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x15f578: 0x245400c0  addiu       $s4, $v0, 0xC0
    ctx->pc = 0x15f578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x15f57c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x15F57Cu;
    SET_GPR_U32(ctx, 31, 0x15F584u);
    ctx->pc = 0x15F580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F57Cu;
            // 0x15f580: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F584u; }
        if (ctx->pc != 0x15F584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F584u; }
        if (ctx->pc != 0x15F584u) { return; }
    }
    ctx->pc = 0x15F584u;
label_15f584:
    // 0x15f584: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15f584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f588: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x15F588u;
    SET_GPR_U32(ctx, 31, 0x15F590u);
    ctx->pc = 0x15F58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F588u;
            // 0x15f58c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F590u; }
        if (ctx->pc != 0x15F590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F590u; }
        if (ctx->pc != 0x15F590u) { return; }
    }
    ctx->pc = 0x15F590u;
label_15f590:
    // 0x15f590: 0x6c0000d  bltz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x15F590u;
    {
        const bool branch_taken_0x15f590 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x15F594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F590u;
            // 0x15f594: 0x161100  sll         $v0, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f590) {
            ctx->pc = 0x15F5C8u;
            goto label_15f5c8;
        }
    }
    ctx->pc = 0x15F598u;
    // 0x15f598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15f598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f59c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15f5a0: 0xc04c038  jal         func_1300E0
    ctx->pc = 0x15F5A0u;
    SET_GPR_U32(ctx, 31, 0x15F5A8u);
    ctx->pc = 0x15F5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5A0u;
            // 0x15f5a4: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300E0u;
    if (runtime->hasFunction(0x1300E0u)) {
        auto targetFn = runtime->lookupFunction(0x1300E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5A8u; }
        if (ctx->pc != 0x15F5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPfPf_0x1300e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5A8u; }
        if (ctx->pc != 0x15F5A8u) { return; }
    }
    ctx->pc = 0x15F5A8u;
label_15f5a8:
    // 0x15f5a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15f5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f5ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15f5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f5b0: 0xc04c038  jal         func_1300E0
    ctx->pc = 0x15F5B0u;
    SET_GPR_U32(ctx, 31, 0x15F5B8u);
    ctx->pc = 0x15F5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5B0u;
            // 0x15f5b4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300E0u;
    if (runtime->hasFunction(0x1300E0u)) {
        auto targetFn = runtime->lookupFunction(0x1300E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5B8u; }
        if (ctx->pc != 0x15F5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPfPf_0x1300e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5B8u; }
        if (ctx->pc != 0x15F5B8u) { return; }
    }
    ctx->pc = 0x15F5B8u;
label_15f5b8:
    // 0x15f5b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15f5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f5bc: 0x0  nop
    ctx->pc = 0x15f5bcu;
    // NOP
    // 0x15f5c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15F5C0u;
    {
        const bool branch_taken_0x15f5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f5c0) {
            ctx->pc = 0x15F5CCu;
            goto label_15f5cc;
        }
    }
    ctx->pc = 0x15F5C8u;
label_15f5c8:
    // 0x15f5c8: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x15f5c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f5cc:
    // 0x15f5cc: 0x0  nop
    ctx->pc = 0x15f5ccu;
    // NOP
    // 0x15f5d0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x15f5d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x15f5d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15f5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15f5d8:
    // 0x15f5d8: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x15f5d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x15f5dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f5e0:
    // 0x15f5e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f5e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15f5e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x15f5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15f5ec: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x15F5ECu;
    {
        const bool branch_taken_0x15f5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5ECu;
            // 0x15f5f0: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5ec) {
            ctx->pc = 0x15F4ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f4ec;
        }
    }
    ctx->pc = 0x15F5F4u;
    // 0x15f5f4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x15F5F4u;
    SET_GPR_U32(ctx, 31, 0x15F5FCu);
    ctx->pc = 0x15F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5F4u;
            // 0x15f5f8: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5FCu; }
        if (ctx->pc != 0x15F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5FCu; }
        if (ctx->pc != 0x15F5FCu) { return; }
    }
    ctx->pc = 0x15F5FCu;
label_15f5fc:
    // 0x15f5fc: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x15f5fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15f600: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15F600u;
    {
        const bool branch_taken_0x15f600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F600u;
            // 0x15f604: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f600) {
            ctx->pc = 0x15F62Cu;
            goto label_15f62c;
        }
    }
    ctx->pc = 0x15F608u;
    // 0x15f608: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15f608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f60c:
    // 0x15f60c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x15f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x15f610: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x15f610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x15f614: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x15F614u;
    SET_GPR_U32(ctx, 31, 0x15F61Cu);
    ctx->pc = 0x15F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F614u;
            // 0x15f618: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F61Cu; }
        if (ctx->pc != 0x15F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F61Cu; }
        if (ctx->pc != 0x15F61Cu) { return; }
    }
    ctx->pc = 0x15F61Cu;
label_15f61c:
    // 0x15f61c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15f620: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x15f620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15f624: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15F624u;
    {
        const bool branch_taken_0x15f624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F624u;
            // 0x15f628: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f624) {
            ctx->pc = 0x15F60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f60c;
        }
    }
    ctx->pc = 0x15F62Cu;
label_15f62c:
    // 0x15f62c: 0x0  nop
    ctx->pc = 0x15f62cu;
    // NOP
    // 0x15f630: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x15F630u;
    {
        const bool branch_taken_0x15f630 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x15F634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F630u;
            // 0x15f634: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f630) {
            ctx->pc = 0x15F664u;
            goto label_15f664;
        }
    }
    ctx->pc = 0x15F638u;
    // 0x15f638: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x15f638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x15f63c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x15f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f640: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15f644: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15f644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f648: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x15f64c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15f64cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f650: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15f650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f654: 0xc04c018  jal         func_130060
    ctx->pc = 0x15F654u;
    SET_GPR_U32(ctx, 31, 0x15F65Cu);
    ctx->pc = 0x15F658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F654u;
            // 0x15f658: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F65Cu; }
        if (ctx->pc != 0x15F65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F65Cu; }
        if (ctx->pc != 0x15F65Cu) { return; }
    }
    ctx->pc = 0x15F65Cu;
label_15f65c:
    // 0x15f65c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15F65Cu;
    {
        const bool branch_taken_0x15f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F65Cu;
            // 0x15f660: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f65c) {
            ctx->pc = 0x15F684u;
            goto label_15f684;
        }
    }
    ctx->pc = 0x15F664u;
label_15f664:
    // 0x15f664: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x15f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15f668: 0xc04c018  jal         func_130060
    ctx->pc = 0x15F668u;
    SET_GPR_U32(ctx, 31, 0x15F670u);
    ctx->pc = 0x15F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F668u;
            // 0x15f66c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F670u; }
        if (ctx->pc != 0x15F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F670u; }
        if (ctx->pc != 0x15F670u) { return; }
    }
    ctx->pc = 0x15F670u;
label_15f670:
    // 0x15f670: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x15f670u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f674: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15f674u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15f678: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f67c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x15f67cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f680: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15f680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_15f684:
    // 0x15f684: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15F684u;
    {
        const bool branch_taken_0x15f684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F684u;
            // 0x15f688: 0x138900  sll         $s1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f684) {
            ctx->pc = 0x15F6C8u;
            goto label_15f6c8;
        }
    }
    ctx->pc = 0x15F68Cu;
label_15f68c:
    // 0x15f68c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15f68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f690: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x15f690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15f694: 0xc04c018  jal         func_130060
    ctx->pc = 0x15F694u;
    SET_GPR_U32(ctx, 31, 0x15F69Cu);
    ctx->pc = 0x15F698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F694u;
            // 0x15f698: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F69Cu; }
        if (ctx->pc != 0x15F69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F69Cu; }
        if (ctx->pc != 0x15F69Cu) { return; }
    }
    ctx->pc = 0x15F69Cu;
label_15f69c:
    // 0x15f69c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15f69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f6a0: 0x0  nop
    ctx->pc = 0x15f6a0u;
    // NOP
    // 0x15f6a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x15F6A4u;
    {
        const bool branch_taken_0x15f6a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f6a4) {
            ctx->pc = 0x15F6BCu;
            goto label_15f6bc;
        }
    }
    ctx->pc = 0x15F6ACu;
    // 0x15f6ac: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x15f6acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15f6b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15f6b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15f6b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f6b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15f6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_15f6bc:
    // 0x15f6bc: 0x0  nop
    ctx->pc = 0x15f6bcu;
    // NOP
    // 0x15f6c0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15f6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x15f6c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15f6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15f6c8:
    // 0x15f6c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f6cc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x15f6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15f6d0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15F6D0u;
    {
        const bool branch_taken_0x15f6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6D0u;
            // 0x15f6d4: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6d0) {
            ctx->pc = 0x15F68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f68c;
        }
    }
    ctx->pc = 0x15F6D8u;
    // 0x15f6d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15F6D8u;
    {
        const bool branch_taken_0x15f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6D8u;
            // 0x15f6dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6d8) {
            ctx->pc = 0x15F6F0u;
            goto label_15f6f0;
        }
    }
    ctx->pc = 0x15F6E0u;
label_15f6e0:
    // 0x15f6e0: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x15f6e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f6e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f6ec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x15f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_15f6f0:
    // 0x15f6f0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x15f6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_15f6f4:
    // 0x15f6f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f6f8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x15f6f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15f6fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15f6fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f700: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15f700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15f704: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x15f704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15f708: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15f708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f70c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15f70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f710: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15f710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f714: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15f714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f718: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15f718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f71c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F71Cu;
            // 0x15f720: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F724u;
}
