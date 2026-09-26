#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cvt
// Address: 0x12c020 - 0x12c1d0
void cvt_0x12c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cvt_0x12c020");
#endif

    switch (ctx->pc) {
        case 0x12c0b4u: goto label_12c0b4;
        case 0x12c0e0u: goto label_12c0e0;
        case 0x12c128u: goto label_12c128;
        case 0x12c14cu: goto label_12c14c;
        case 0x12c168u: goto label_12c168;
        default: break;
    }

    ctx->pc = 0x12c020u;

    // 0x12c020: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12c024: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x12c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12c028: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x12c028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x12c02c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x12c02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x12c030: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x12c030u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c034: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x12c034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x12c038: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x12c038u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c03c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x12c03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x12c040: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12c040u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c044: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x12c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x12c048: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x12c048u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c04c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12c050: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12c050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c054: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x12c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x12c058: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12c058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c05c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12c05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12c060: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x12c060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c064: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x12c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x12c068: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12c068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c06c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C06Cu;
    {
        const bool branch_taken_0x12c06c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C06Cu;
            // 0x12c070: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c06c) {
            ctx->pc = 0x12C07Cu;
            goto label_12c07c;
        }
    }
    ctx->pc = 0x12C074u;
    // 0x12c074: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12C074u;
    {
        const bool branch_taken_0x12c074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C074u;
            // 0x12c078: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c074) {
            ctx->pc = 0x12C098u;
            goto label_12c098;
        }
    }
    ctx->pc = 0x12C07Cu;
label_12c07c:
    // 0x12c07c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x12c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12c080: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C080u;
    {
        const bool branch_taken_0x12c080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C080u;
            // 0x12c084: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c080) {
            ctx->pc = 0x12C090u;
            goto label_12c090;
        }
    }
    ctx->pc = 0x12C088u;
    // 0x12c088: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C088u;
    {
        const bool branch_taken_0x12c088 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C088u;
            // 0x12c08c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c088) {
            ctx->pc = 0x12C098u;
            goto label_12c098;
        }
    }
    ctx->pc = 0x12C090u;
label_12c090:
    // 0x12c090: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12c090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x12c094: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12c094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12c098:
    // 0x12c098: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12c098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c09c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12c09cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12c0a0: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C0A0u;
    {
        const bool branch_taken_0x12c0a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12c0a0) {
            ctx->pc = 0x12C0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0A0u;
            // 0x12c0a4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C0C0u;
            goto label_12c0c0;
        }
    }
    ctx->pc = 0x12C0A8u;
    // 0x12c0a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12c0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0ac: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x12C0ACu;
    SET_GPR_U32(ctx, 31, 0x12C0B4u);
    ctx->pc = 0x12C0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0ACu;
            // 0x12c0b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0B4u; }
        if (ctx->pc != 0x12C0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0B4u; }
        if (ctx->pc != 0x12C0B4u) { return; }
    }
    ctx->pc = 0x12C0B4u;
label_12c0b4:
    // 0x12c0b4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x12c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12c0b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c0b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0bc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x12c0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_12c0c0:
    // 0x12c0c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12c0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12c0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12c0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0d0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x12c0d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0d4: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x12c0d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0d8: 0xc049096  jal         func_124258
    ctx->pc = 0x12C0D8u;
    SET_GPR_U32(ctx, 31, 0x12C0E0u);
    ctx->pc = 0x12C0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0D8u;
            // 0x12c0dc: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x124258u;
    if (runtime->hasFunction(0x124258u)) {
        auto targetFn = runtime->lookupFunction(0x124258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0E0u; }
        if (ctx->pc != 0x12C0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dtoa_r_0x124258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0E0u; }
        if (ctx->pc != 0x12C0E0u) { return; }
    }
    ctx->pc = 0x12C0E0u;
label_12c0e0:
    // 0x12c0e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c0e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0e4: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x12c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12c0e8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C0E8u;
    {
        const bool branch_taken_0x12c0e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0E8u;
            // 0x12c0ec: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0e8) {
            ctx->pc = 0x12C0F8u;
            goto label_12c0f8;
        }
    }
    ctx->pc = 0x12C0F0u;
    // 0x12c0f0: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C0F0u;
    {
        const bool branch_taken_0x12c0f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0F0u;
            // 0x12c0f4: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0f0) {
            ctx->pc = 0x12C104u;
            goto label_12c104;
        }
    }
    ctx->pc = 0x12C0F8u;
label_12c0f8:
    // 0x12c0f8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12c0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12c0fc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12C0FCu;
    {
        const bool branch_taken_0x12c0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0FCu;
            // 0x12c100: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0fc) {
            ctx->pc = 0x12C190u;
            goto label_12c190;
        }
    }
    ctx->pc = 0x12C104u;
label_12c104:
    // 0x12c104: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12C104u;
    {
        const bool branch_taken_0x12c104 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C104u;
            // 0x12c108: 0x2748021  addu        $s0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c104) {
            ctx->pc = 0x12C140u;
            goto label_12c140;
        }
    }
    ctx->pc = 0x12C10Cu;
    // 0x12c10c: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x12c10cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12c110: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c114: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12C114u;
    {
        const bool branch_taken_0x12c114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12c114) {
            ctx->pc = 0x12C118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C114u;
            // 0x12c118: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C13Cu;
            goto label_12c13c;
        }
    }
    ctx->pc = 0x12C11Cu;
    // 0x12c11c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c120: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12C120u;
    SET_GPR_U32(ctx, 31, 0x12C128u);
    ctx->pc = 0x12C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C120u;
            // 0x12c124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C128u; }
        if (ctx->pc != 0x12C128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C128u; }
        if (ctx->pc != 0x12C128u) { return; }
    }
    ctx->pc = 0x12C128u;
label_12c128:
    // 0x12c128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C128u;
    {
        const bool branch_taken_0x12c128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C128u;
            // 0x12c12c: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c128) {
            ctx->pc = 0x12C138u;
            goto label_12c138;
        }
    }
    ctx->pc = 0x12C130u;
    // 0x12c130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c134: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x12c134u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_12c138:
    // 0x12c138: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x12c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12c13c:
    // 0x12c13c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12c13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_12c140:
    // 0x12c140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c144: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12C144u;
    SET_GPR_U32(ctx, 31, 0x12C14Cu);
    ctx->pc = 0x12C148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C144u;
            // 0x12c148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C14Cu; }
        if (ctx->pc != 0x12C14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C14Cu; }
        if (ctx->pc != 0x12C14Cu) { return; }
    }
    ctx->pc = 0x12C14Cu;
label_12c14c:
    // 0x12c14c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C14Cu;
    {
        const bool branch_taken_0x12c14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c14c) {
            ctx->pc = 0x12C150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C14Cu;
            // 0x12c150: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C154u;
            goto label_12c154;
        }
    }
    ctx->pc = 0x12C154u;
label_12c154:
    // 0x12c154: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12c154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12c158: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x12c158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12c15c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12C15Cu;
    {
        const bool branch_taken_0x12c15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C15Cu;
            // 0x12c160: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c15c) {
            ctx->pc = 0x12C194u;
            goto label_12c194;
        }
    }
    ctx->pc = 0x12C164u;
    // 0x12c164: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x12c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12c168:
    // 0x12c168: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x12c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c16c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x12c16cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x12c170: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c174: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12c174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x12c178: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12c178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c17c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x12c17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12c180: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12C180u;
    {
        const bool branch_taken_0x12c180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c180) {
            ctx->pc = 0x12C168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c168;
        }
    }
    ctx->pc = 0x12C188u;
    // 0x12c188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C188u;
    {
        const bool branch_taken_0x12c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C188u;
            // 0x12c18c: 0x731823  subu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c188) {
            ctx->pc = 0x12C198u;
            goto label_12c198;
        }
    }
    ctx->pc = 0x12C190u;
label_12c190:
    // 0x12c190: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12c194:
    // 0x12c194: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x12c194u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_12c198:
    // 0x12c198: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x12c198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c19c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x12c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x12c1a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x12c1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12c1a4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x12c1a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c1a8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x12c1a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12c1ac: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x12c1acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c1b0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x12c1b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c1b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x12c1b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c1b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x12c1b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c1bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x12c1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c1c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x12c1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c1c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12c1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C1C8u;
            // 0x12c1cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C1D0u;
}
