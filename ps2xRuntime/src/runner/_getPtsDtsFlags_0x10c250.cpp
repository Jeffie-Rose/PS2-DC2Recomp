#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _getPtsDtsFlags
// Address: 0x10c250 - 0x10c3dc
void _getPtsDtsFlags_0x10c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getPtsDtsFlags_0x10c250");
#endif

    switch (ctx->pc) {
        case 0x10c2d0u: goto label_10c2d0;
        case 0x10c2e0u: goto label_10c2e0;
        case 0x10c2f4u: goto label_10c2f4;
        case 0x10c318u: goto label_10c318;
        default: break;
    }

    ctx->pc = 0x10c250u;

    // 0x10c250: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10c250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10c254: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x10c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10c258: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10c258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10c25c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x10c25cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c260: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10c260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10c264: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x10c264u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c268: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10c268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10c26c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10c26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c270: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10c274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10c274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c278: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10c27c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10c27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10c280: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10c284: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10c288: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10c288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10c28c: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x10c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x10c290: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x10C290u;
    {
        const bool branch_taken_0x10c290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C290u;
            // 0x10c294: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c290) {
            ctx->pc = 0x10C328u;
            goto label_10c328;
        }
    }
    ctx->pc = 0x10C298u;
    // 0x10c298: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x10c298u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x10c29c: 0x4430024  bgezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x10C29Cu;
    {
        const bool branch_taken_0x10c29c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10c29c) {
            ctx->pc = 0x10C2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10C29Cu;
            // 0x10c2a0: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10C330u;
            goto label_10c330;
        }
    }
    ctx->pc = 0x10C2A4u;
    // 0x10c2a4: 0x8e770080  lw          $s7, 0x80($s3)
    ctx->pc = 0x10c2a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x10c2a8: 0x6e20021  bltzl       $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x10C2A8u;
    {
        const bool branch_taken_0x10c2a8 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x10c2a8) {
            ctx->pc = 0x10C2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2A8u;
            // 0x10c2ac: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10C330u;
            goto label_10c330;
        }
    }
    ctx->pc = 0x10C2B0u;
    // 0x10c2b0: 0xde700088  ld          $s0, 0x88($s3)
    ctx->pc = 0x10c2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x10c2b4: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x10c2b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x10c2b8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10c2b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10c2bc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x10c2bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x10c2c0: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x10c2c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10c2c4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x10c2c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10c2c8: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x10C2C8u;
    SET_GPR_U32(ctx, 31, 0x10C2D0u);
    ctx->pc = 0x10C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2C8u;
            // 0x10c2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C2D0u; }
        if (ctx->pc != 0x10C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C2D0u; }
        if (ctx->pc != 0x10C2D0u) { return; }
    }
    ctx->pc = 0x10C2D0u;
label_10c2d0:
    // 0x10c2d0: 0x8e760090  lw          $s6, 0x90($s3)
    ctx->pc = 0x10c2d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x10c2d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2d8: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x10C2D8u;
    SET_GPR_U32(ctx, 31, 0x10C2E0u);
    ctx->pc = 0x10C2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2D8u;
            // 0x10c2dc: 0x32c50001  andi        $a1, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C2E0u; }
        if (ctx->pc != 0x10C2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C2E0u; }
        if (ctx->pc != 0x10C2E0u) { return; }
    }
    ctx->pc = 0x10C2E0u;
label_10c2e0:
    // 0x10c2e0: 0xde640078  ld          $a0, 0x78($s3)
    ctx->pc = 0x10c2e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x10c2e4: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x10c2e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c2e8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x10c2e8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x10c2ec: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x10C2ECu;
    SET_GPR_U32(ctx, 31, 0x10C2F4u);
    ctx->pc = 0x10C2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2ECu;
            // 0x10c2f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C2F4u; }
        if (ctx->pc != 0x10C2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C2F4u; }
        if (ctx->pc != 0x10C2F4u) { return; }
    }
    ctx->pc = 0x10C2F4u;
label_10c2f4:
    // 0x10c2f4: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x10c2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x10c2f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c2f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c2fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c300: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10c304: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x10c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x10c308: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x10c308u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x10c30c: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x10c30cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x10c310: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x10C310u;
    SET_GPR_U32(ctx, 31, 0x10C318u);
    ctx->pc = 0x10C314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C310u;
            // 0x10c314: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C318u; }
        if (ctx->pc != 0x10C318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C318u; }
        if (ctx->pc != 0x10C318u) { return; }
    }
    ctx->pc = 0x10C318u;
label_10c318:
    // 0x10c318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C318u;
    {
        const bool branch_taken_0x10c318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C318u;
            // 0x10c31c: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c318) {
            ctx->pc = 0x10C330u;
            goto label_10c330;
        }
    }
    ctx->pc = 0x10C320u;
    // 0x10c320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C320u;
    {
        const bool branch_taken_0x10c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C320u;
            // 0x10c324: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c320) {
            ctx->pc = 0x10C330u;
            goto label_10c330;
        }
    }
    ctx->pc = 0x10C328u;
label_10c328:
    // 0x10c328: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x10c328u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x10c32c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x10c32cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_10c330:
    // 0x10c330: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x10c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x10c334: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c338: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C338u;
    {
        const bool branch_taken_0x10c338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c338) {
            ctx->pc = 0x10C33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10C338u;
            // 0x10c33c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10C360u;
            goto label_10c360;
        }
    }
    ctx->pc = 0x10C340u;
    // 0x10c340: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x10c340u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x10c344: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C344u;
    {
        const bool branch_taken_0x10c344 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c344) {
            ctx->pc = 0x10C348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10C344u;
            // 0x10c348: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10C360u;
            goto label_10c360;
        }
    }
    ctx->pc = 0x10C34Cu;
    // 0x10c34c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x10c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x10c350: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c354: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x10c354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x10c358: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x10c358u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x10c35c: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x10c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_10c360:
    // 0x10c360: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x10c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x10c364: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x10c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x10c368: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x10c368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x10c36c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x10c36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x10c370: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x10c370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x10c374: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x10c374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x10c378: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x10c378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x10c37c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x10c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x10c380: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10c380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10c384: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x10c384u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x10c388: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10c388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10c38c: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x10c38cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x10c390: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x10c390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x10c394: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x10c394u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x10c398: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10c398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x10c39c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10c39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x10c3a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10c3a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10c3a8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10c3a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10c3ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c3b0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10c3b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10c3b4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10c3b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c3b8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10c3b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c3bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10c3bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c3c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10c3c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c3c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10c3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c3c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10c3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c3cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10c3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c3d0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x10c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x10c3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C3D4u;
            // 0x10c3d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C3DCu;
}
