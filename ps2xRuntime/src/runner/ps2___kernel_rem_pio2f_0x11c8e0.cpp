#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __kernel_rem_pio2f
// Address: 0x11c8e0 - 0x11d22c
void ps2___kernel_rem_pio2f_0x11c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_rem_pio2f_0x11c8e0");
#endif

    switch (ctx->pc) {
        case 0x11c990u: goto label_11c990;
        case 0x11ca00u: goto label_11ca00;
        case 0x11ca20u: goto label_11ca20;
        case 0x11ca7cu: goto label_11ca7c;
        case 0x11cab0u: goto label_11cab0;
        case 0x11caf8u: goto label_11caf8;
        case 0x11cb10u: goto label_11cb10;
        case 0x11cbe0u: goto label_11cbe0;
        case 0x11cc84u: goto label_11cc84;
        case 0x11ccb0u: goto label_11ccb0;
        case 0x11ccf0u: goto label_11ccf0;
        case 0x11cd38u: goto label_11cd38;
        case 0x11cd78u: goto label_11cd78;
        case 0x11ce08u: goto label_11ce08;
        case 0x11ce34u: goto label_11ce34;
        case 0x11cec4u: goto label_11cec4;
        case 0x11cee8u: goto label_11cee8;
        case 0x11cf20u: goto label_11cf20;
        case 0x11cf48u: goto label_11cf48;
        case 0x11d000u: goto label_11d000;
        case 0x11d050u: goto label_11d050;
        case 0x11d0a0u: goto label_11d0a0;
        case 0x11d0f0u: goto label_11d0f0;
        case 0x11d140u: goto label_11d140;
        case 0x11d198u: goto label_11d198;
        default: break;
    }

    ctx->pc = 0x11c8e0u;

    // 0x11c8e0: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x11c8e4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x11c8e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c8e8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x11c8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x11c8ec: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x11c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11c8f0: 0x16c502a  slt         $t2, $t3, $t4
    ctx->pc = 0x11c8f0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11c8f4: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x11c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x11c8f8: 0x18a100b  movn        $v0, $t4, $t2
    ctx->pc = 0x11c8f8u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12));
    // 0x11c8fc: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x11c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x11c900: 0x2b0c3  sra         $s6, $v0, 3
    ctx->pc = 0x11c900u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 3));
    // 0x11c904: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11c904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11c908: 0x246317d0  addiu       $v1, $v1, 0x17D0
    ctx->pc = 0x11c908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6096));
    // 0x11c90c: 0x176582a  slt         $t3, $t3, $s6
    ctx->pc = 0x11c90cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x11c910: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x11c910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11c914: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x11c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x11c918: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x11c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x11c91c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c920: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x11c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x11c924: 0xbb00a  movz        $s6, $zero, $t3
    ctx->pc = 0x11c924u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0));
    // 0x11c928: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x11c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x11c92c: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x11c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x11c930: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x11c930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x11c934: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11c934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x11c938: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x11c938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x11c93c: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x11c93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11c940: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x11c940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x11c944: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x11c944u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11c948: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x11c948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x11c94c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x11c94cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c950: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x11c950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x11c954: 0x2d12823  subu        $a1, $s6, $s1
    ctx->pc = 0x11c954u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x11c958: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x11c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x11c95c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c960: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x11c960u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c964: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x11c964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x11c968: 0x2343821  addu        $a3, $s1, $s4
    ctx->pc = 0x11c968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x11c96c: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C96Cu;
    {
        const bool branch_taken_0x11c96c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x11C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C96Cu;
            // 0x11c970: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c96c) {
            ctx->pc = 0x11C9D4u;
            goto label_11c9d4;
        }
    }
    ctx->pc = 0x11C974u;
    // 0x11c974: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x11c974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c978: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x11c978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11c97c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x11c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x11c980: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x11c980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11c984: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x11c984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x11c988: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c988u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11c98c: 0x0  nop
    ctx->pc = 0x11c98cu;
    // NOP
label_11c990:
    // 0x11c990: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11c990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11c994: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C994u;
    {
        const bool branch_taken_0x11c994 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C994u;
            // 0x11c998: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c994) {
            ctx->pc = 0x11C9B8u;
            goto label_11c9b8;
        }
    }
    ctx->pc = 0x11C99Cu;
    // 0x11c99c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x11c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x11c9a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11c9a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c9a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c9ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11c9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11c9b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C9B0u;
    {
        const bool branch_taken_0x11c9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9B0u;
            // 0x11c9b4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9b0) {
            ctx->pc = 0x11C9BCu;
            goto label_11c9bc;
        }
    }
    ctx->pc = 0x11C9B8u;
label_11c9b8:
    // 0x11c9b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_11c9bc:
    // 0x11c9bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11c9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11c9c0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x11c9c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11c9c4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11C9C4u;
    {
        const bool branch_taken_0x11c9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9C4u;
            // 0x11c9c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9c4) {
            ctx->pc = 0x11C990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c990;
        }
    }
    ctx->pc = 0x11C9CCu;
    // 0x11c9cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11C9CCu;
    {
        const bool branch_taken_0x11c9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9CCu;
            // 0x11c9d0: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9cc) {
            ctx->pc = 0x11C9F0u;
            goto label_11c9f0;
        }
    }
    ctx->pc = 0x11C9D4u;
label_11c9d4:
    // 0x11c9d4: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x11c9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x11c9d8: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x11c9d8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c9dc: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x11c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x11c9e0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c9e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11c9e4: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x11c9e4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11c9e8: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x11c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x11c9ec: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x11c9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_11c9f0:
    // 0x11c9f0: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11C9F0u;
    {
        const bool branch_taken_0x11c9f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9F0u;
            // 0x11c9f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9f0) {
            ctx->pc = 0x11CA78u;
            goto label_11ca78;
        }
    }
    ctx->pc = 0x11C9F8u;
    // 0x11c9f8: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x11c9f8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c9fc: 0x0  nop
    ctx->pc = 0x11c9fcu;
    // NOP
label_11ca00:
    // 0x11ca00: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ca00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ca04: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x11CA04u;
    {
        const bool branch_taken_0x11ca04 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA04u;
            // 0x11ca08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca04) {
            ctx->pc = 0x11CA5Cu;
            goto label_11ca5c;
        }
    }
    ctx->pc = 0x11CA0Cu;
    // 0x11ca0c: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x11ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x11ca10: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x11ca10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11ca14: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x11ca14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11ca18: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x11ca18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ca1c: 0x0  nop
    ctx->pc = 0x11ca1cu;
    // NOP
label_11ca20:
    // 0x11ca20: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x11ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11ca24: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x11ca24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11ca28: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11ca2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ca30: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x11ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11ca34: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11ca38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ca3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11ca40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ca44: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x11ca44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11ca48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11ca48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ca4c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CA4Cu;
    {
        const bool branch_taken_0x11ca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA4Cu;
            // 0x11ca50: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca4c) {
            ctx->pc = 0x11CA20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ca20;
        }
    }
    ctx->pc = 0x11CA54u;
    // 0x11ca54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11CA54u;
    {
        const bool branch_taken_0x11ca54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA54u;
            // 0x11ca58: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca54) {
            ctx->pc = 0x11CA68u;
            goto label_11ca68;
        }
    }
    ctx->pc = 0x11CA5Cu;
label_11ca5c:
    // 0x11ca5c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x11ca5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ca60: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x11ca60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11ca64: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x11ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_11ca68:
    // 0x11ca68: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x11ca68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca6c: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x11ca6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11ca70: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x11CA70u;
    {
        const bool branch_taken_0x11ca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA70u;
            // 0x11ca74: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca70) {
            ctx->pc = 0x11CA00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ca00;
        }
    }
    ctx->pc = 0x11CA78u;
label_11ca78:
    // 0x11ca78: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x11ca78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11ca7c:
    // 0x11ca7c: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x11ca7cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11ca80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ca80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca84: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x11ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x11ca88: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11CA88u;
    {
        const bool branch_taken_0x11ca88 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11CA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA88u;
            // 0x11ca8c: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca88) {
            ctx->pc = 0x11CAECu;
            goto label_11caec;
        }
    }
    ctx->pc = 0x11CA90u;
    // 0x11ca90: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x11ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x11ca94: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x11ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x11ca98: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11ca98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11ca9c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x11ca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x11caa0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11caa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11caa4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x11caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x11caa8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x11caa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11caac: 0x0  nop
    ctx->pc = 0x11caacu;
    // NOP
label_11cab0:
    // 0x11cab0: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x11cab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x11cab4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x11cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cab8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x11cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x11cabc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11cac0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11cac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11cac4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11cac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11cac8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11cac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cacc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11caccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11cad0: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x11cad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11cad4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11cad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11cad8: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x11cad8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11cadc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11cadcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11cae0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x11cae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11cae4: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11CAE4u;
    {
        const bool branch_taken_0x11cae4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11CAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAE4u;
            // 0x11cae8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cae4) {
            ctx->pc = 0x11CAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cab0;
        }
    }
    ctx->pc = 0x11CAECu;
label_11caec:
    // 0x11caec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11caecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11caf0: 0xc0479ea  jal         func_11E7A8
    ctx->pc = 0x11CAF0u;
    SET_GPR_U32(ctx, 31, 0x11CAF8u);
    ctx->pc = 0x11CAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAF0u;
            // 0x11caf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E7A8u;
    if (runtime->hasFunction(0x11E7A8u)) {
        auto targetFn = runtime->lookupFunction(0x11E7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAF8u; }
        if (ctx->pc != 0x11CAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbnf_0x11e7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAF8u; }
        if (ctx->pc != 0x11CAF8u) { return; }
    }
    ctx->pc = 0x11CAF8u;
label_11caf8:
    // 0x11caf8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x11caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x11cafc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11cafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11cb00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11cb00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11cb04: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x11cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x11cb08: 0xc0479a6  jal         func_11E698
    ctx->pc = 0x11CB08u;
    SET_GPR_U32(ctx, 31, 0x11CB10u);
    ctx->pc = 0x11CB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB08u;
            // 0x11cb0c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E698u;
    if (runtime->hasFunction(0x11E698u)) {
        auto targetFn = runtime->lookupFunction(0x11E698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CB10u; }
        if (ctx->pc != 0x11CB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        floorf_0x11e698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CB10u; }
        if (ctx->pc != 0x11CB10u) { return; }
    }
    ctx->pc = 0x11CB10u;
label_11cb10:
    // 0x11cb10: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x11cb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x11cb14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11cb14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cb18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11cb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11cb1c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11cb1cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11cb20: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11cb20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11cb24: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x11cb24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x11cb28: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x11cb28u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cb2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11cb2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11cb30: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CB30u;
    {
        const bool branch_taken_0x11cb30 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11CB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB30u;
            // 0x11cb34: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb30) {
            ctx->pc = 0x11CB78u;
            goto label_11cb78;
        }
    }
    ctx->pc = 0x11CB38u;
    // 0x11cb38: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x11cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11cb3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x11cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11cb40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cb44: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x11cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11cb48: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x11cb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11cb4c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x11cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11cb50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11cb54: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x11cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x11cb58: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x11cb58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11cb5c: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x11cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x11cb60: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x11cb60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x11cb64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11cb68: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x11cb68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x11cb6c: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x11cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x11cb70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11CB70u;
    {
        const bool branch_taken_0x11cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB70u;
            // 0x11cb74: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb70) {
            ctx->pc = 0x11CBB4u;
            goto label_11cbb4;
        }
    }
    ctx->pc = 0x11CB78u;
label_11cb78:
    // 0x11cb78: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CB78u;
    {
        const bool branch_taken_0x11cb78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB78u;
            // 0x11cb7c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb78) {
            ctx->pc = 0x11CB98u;
            goto label_11cb98;
        }
    }
    ctx->pc = 0x11CB80u;
    // 0x11cb80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cb84: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11cb88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cb8c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x11cb8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x11cb90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11CB90u;
    {
        const bool branch_taken_0x11cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB90u;
            // 0x11cb94: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb90) {
            ctx->pc = 0x11CBB4u;
            goto label_11cbb4;
        }
    }
    ctx->pc = 0x11CB98u;
label_11cb98:
    // 0x11cb98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11cb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11cb9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cba0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x11cba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cba4: 0x0  nop
    ctx->pc = 0x11cba4u;
    // NOP
    // 0x11cba8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11CBA8u;
    {
        const bool branch_taken_0x11cba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBA8u;
            // 0x11cbac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cba8) {
            ctx->pc = 0x11CBB4u;
            goto label_11cbb4;
        }
    }
    ctx->pc = 0x11CBB0u;
    // 0x11cbb0: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x11cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_11cbb4:
    // 0x11cbb4: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x11cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11cbb8: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x11CBB8u;
    {
        const bool branch_taken_0x11cbb8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11cbb8) {
            ctx->pc = 0x11CC88u;
            goto label_11cc88;
        }
    }
    ctx->pc = 0x11CBC0u;
    // 0x11cbc0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11cbc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11cbc4: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CBC4u;
    {
        const bool branch_taken_0x11cbc4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11CBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBC4u;
            // 0x11cbc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbc4) {
            ctx->pc = 0x11CC0Cu;
            goto label_11cc0c;
        }
    }
    ctx->pc = 0x11CBCCu;
    // 0x11cbcc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x11cbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11cbd0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x11cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11cbd4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x11cbd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11cbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbdc: 0x0  nop
    ctx->pc = 0x11cbdcu;
    // NOP
label_11cbe0:
    // 0x11cbe0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CBE0u;
    {
        const bool branch_taken_0x11cbe0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBE0u;
            // 0x11cbe4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe0) {
            ctx->pc = 0x11CBF8u;
            goto label_11cbf8;
        }
    }
    ctx->pc = 0x11CBE8u;
    // 0x11cbe8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CBE8u;
    {
        const bool branch_taken_0x11cbe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBE8u;
            // 0x11cbec: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe8) {
            ctx->pc = 0x11CC00u;
            goto label_11cc00;
        }
    }
    ctx->pc = 0x11CBF0u;
    // 0x11cbf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CBF0u;
    {
        const bool branch_taken_0x11cbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBF0u;
            // 0x11cbf4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbf0) {
            ctx->pc = 0x11CBFCu;
            goto label_11cbfc;
        }
    }
    ctx->pc = 0x11CBF8u;
label_11cbf8:
    // 0x11cbf8: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x11cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_11cbfc:
    // 0x11cbfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_11cc00:
    // 0x11cc00: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11cc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11cc04: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x11CC04u;
    {
        const bool branch_taken_0x11cc04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC04u;
            // 0x11cc08: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc04) {
            ctx->pc = 0x11CBE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cbe0;
        }
    }
    ctx->pc = 0x11CC0Cu;
label_11cc0c:
    // 0x11cc0c: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x11CC0Cu;
    {
        const bool branch_taken_0x11cc0c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11CC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC0Cu;
            // 0x11cc10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc0c) {
            ctx->pc = 0x11CC5Cu;
            goto label_11cc5c;
        }
    }
    ctx->pc = 0x11CC14u;
    // 0x11cc14: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CC14u;
    {
        const bool branch_taken_0x11cc14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC14u;
            // 0x11cc18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc14) {
            ctx->pc = 0x11CC2Cu;
            goto label_11cc2c;
        }
    }
    ctx->pc = 0x11CC1Cu;
    // 0x11cc1c: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CC1Cu;
    {
        const bool branch_taken_0x11cc1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC1Cu;
            // 0x11cc20: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc1c) {
            ctx->pc = 0x11CC44u;
            goto label_11cc44;
        }
    }
    ctx->pc = 0x11CC24u;
    // 0x11cc24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11CC24u;
    {
        const bool branch_taken_0x11cc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cc24) {
            ctx->pc = 0x11CC64u;
            goto label_11cc64;
        }
    }
    ctx->pc = 0x11CC2Cu;
label_11cc2c:
    // 0x11cc2c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x11cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11cc30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cc34: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x11cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11cc38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11cc3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11CC3Cu;
    {
        const bool branch_taken_0x11cc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC3Cu;
            // 0x11cc40: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc3c) {
            ctx->pc = 0x11CC58u;
            goto label_11cc58;
        }
    }
    ctx->pc = 0x11CC44u;
label_11cc44:
    // 0x11cc44: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x11cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11cc48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cc4c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x11cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11cc50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11cc54: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x11cc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_11cc58:
    // 0x11cc58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_11cc5c:
    // 0x11cc5c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x11cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11cc60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11cc64:
    // 0x11cc64: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CC64u;
    {
        const bool branch_taken_0x11cc64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11cc64) {
            ctx->pc = 0x11CC88u;
            goto label_11cc88;
        }
    }
    ctx->pc = 0x11CC6Cu;
    // 0x11cc6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cc70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11cc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11cc74: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CC74u;
    {
        const bool branch_taken_0x11cc74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC74u;
            // 0x11cc78: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc74) {
            ctx->pc = 0x11CC88u;
            goto label_11cc88;
        }
    }
    ctx->pc = 0x11CC7Cu;
    // 0x11cc7c: 0xc0479ea  jal         func_11E7A8
    ctx->pc = 0x11CC7Cu;
    SET_GPR_U32(ctx, 31, 0x11CC84u);
    ctx->pc = 0x11CC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC7Cu;
            // 0x11cc80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E7A8u;
    if (runtime->hasFunction(0x11E7A8u)) {
        auto targetFn = runtime->lookupFunction(0x11E7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC84u; }
        if (ctx->pc != 0x11CC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbnf_0x11e7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC84u; }
        if (ctx->pc != 0x11CC84u) { return; }
    }
    ctx->pc = 0x11CC84u;
label_11cc84:
    // 0x11cc84: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11cc84u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_11cc88:
    // 0x11cc88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11cc88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cc8c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11cc8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cc90: 0x0  nop
    ctx->pc = 0x11cc90u;
    // NOP
    // 0x11cc94: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x11CC94u;
    {
        const bool branch_taken_0x11cc94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC94u;
            // 0x11cc98: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc94) {
            ctx->pc = 0x11CDE4u;
            goto label_11cde4;
        }
    }
    ctx->pc = 0x11CC9Cu;
    // 0x11cc9c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x11cc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11cca0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11CCA0u;
    {
        const bool branch_taken_0x11cca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCA0u;
            // 0x11cca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cca0) {
            ctx->pc = 0x11CCCCu;
            goto label_11cccc;
        }
    }
    ctx->pc = 0x11CCA8u;
    // 0x11cca8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11ccac: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x11ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11ccb0:
    // 0x11ccb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ccb4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11ccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11ccb8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x11ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x11ccbc: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x11ccbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11ccc0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x11ccc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x11ccc4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CCC4u;
    {
        const bool branch_taken_0x11ccc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ccc4) {
            ctx->pc = 0x11CCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ccb0;
        }
    }
    ctx->pc = 0x11CCCCu;
label_11cccc:
    // 0x11cccc: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x11CCCCu;
    {
        const bool branch_taken_0x11cccc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCCCu;
            // 0x11ccd0: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cccc) {
            ctx->pc = 0x11CDD8u;
            goto label_11cdd8;
        }
    }
    ctx->pc = 0x11CCD4u;
    // 0x11ccd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ccd8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11ccdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cce0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x11CCE0u;
    {
        const bool branch_taken_0x11cce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCE0u;
            // 0x11cce4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cce0) {
            ctx->pc = 0x11CD14u;
            goto label_11cd14;
        }
    }
    ctx->pc = 0x11CCE8u;
    // 0x11cce8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x11cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ccec: 0x0  nop
    ctx->pc = 0x11ccecu;
    // NOP
label_11ccf0:
    // 0x11ccf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11ccf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11ccf4: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x11ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x11ccf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ccfc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11cd00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cd04: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CD04u;
    {
        const bool branch_taken_0x11cd04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd04) {
            ctx->pc = 0x11CCF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ccf0;
        }
    }
    ctx->pc = 0x11CD0Cu;
    // 0x11cd0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11CD0Cu;
    {
        const bool branch_taken_0x11cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD0Cu;
            // 0x11cd10: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd0c) {
            ctx->pc = 0x11CD1Cu;
            goto label_11cd1c;
        }
    }
    ctx->pc = 0x11CD14u;
label_11cd14:
    // 0x11cd14: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x11cd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11cd18: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x11cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_11cd1c:
    // 0x11cd1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11cd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd20: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x11cd20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11cd24: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x11CD24u;
    {
        const bool branch_taken_0x11cd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD24u;
            // 0x11cd28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd24) {
            ctx->pc = 0x11CA7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11CD2Cu;
    // 0x11cd2c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x11cd2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11cd30: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x11cd30u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11cd34: 0x0  nop
    ctx->pc = 0x11cd34u;
    // NOP
label_11cd38:
    // 0x11cd38: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x11cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x11cd3c: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x11cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x11cd40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cd44: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x11cd44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x11cd48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11cd4c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x11cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11cd50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cd54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11cd54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11cd58: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x11cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x11cd5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11cd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11cd60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cd64: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x11CD64u;
    {
        const bool branch_taken_0x11cd64 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD64u;
            // 0x11cd68: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd64) {
            ctx->pc = 0x11CDB4u;
            goto label_11cdb4;
        }
    }
    ctx->pc = 0x11CD6Cu;
    // 0x11cd6c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x11cd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11cd70: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x11cd70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11cd74: 0x0  nop
    ctx->pc = 0x11cd74u;
    // NOP
label_11cd78:
    // 0x11cd78: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x11cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x11cd7c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x11cd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11cd80: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11cd84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cd88: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x11cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11cd8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11cd90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11cd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cd94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11cd98: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cd9c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x11cd9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11cda0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11cda0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11cda4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CDA4u;
    {
        const bool branch_taken_0x11cda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDA4u;
            // 0x11cda8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cda4) {
            ctx->pc = 0x11CD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cd78;
        }
    }
    ctx->pc = 0x11CDACu;
    // 0x11cdac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11CDACu;
    {
        const bool branch_taken_0x11cdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDACu;
            // 0x11cdb0: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdac) {
            ctx->pc = 0x11CDC0u;
            goto label_11cdc0;
        }
    }
    ctx->pc = 0x11CDB4u;
label_11cdb4:
    // 0x11cdb4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x11cdb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11cdb8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x11cdb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11cdbc: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x11cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_11cdc0:
    // 0x11cdc0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x11cdc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdc4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x11cdc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11cdc8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x11CDC8u;
    {
        const bool branch_taken_0x11cdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDC8u;
            // 0x11cdcc: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdc8) {
            ctx->pc = 0x11CD38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cd38;
        }
    }
    ctx->pc = 0x11CDD0u;
    // 0x11cdd0: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x11CDD0u;
    {
        const bool branch_taken_0x11cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDD0u;
            // 0x11cdd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdd0) {
            ctx->pc = 0x11CA7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11CDD8u;
label_11cdd8:
    // 0x11cdd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11cdd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cddc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11cddcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cde0: 0x0  nop
    ctx->pc = 0x11cde0u;
    // NOP
label_11cde4:
    // 0x11cde4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x11CDE4u;
    {
        const bool branch_taken_0x11cde4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDE4u;
            // 0x11cde8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cde4) {
            ctx->pc = 0x11CE2Cu;
            goto label_11ce2c;
        }
    }
    ctx->pc = 0x11CDECu;
    // 0x11cdec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11cdecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11cdf0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11cdf4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11cdf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cdfc: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11CDFCu;
    {
        const bool branch_taken_0x11cdfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDFCu;
            // 0x11ce00: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdfc) {
            ctx->pc = 0x11CEB0u;
            goto label_11ceb0;
        }
    }
    ctx->pc = 0x11CE04u;
    // 0x11ce04: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x11ce04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_11ce08:
    // 0x11ce08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11ce08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11ce0c: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x11ce0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x11ce10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11ce14: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11ce18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ce1c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CE1Cu;
    {
        const bool branch_taken_0x11ce1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce1c) {
            ctx->pc = 0x11CE08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ce08;
        }
    }
    ctx->pc = 0x11CE24u;
    // 0x11ce24: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x11CE24u;
    {
        const bool branch_taken_0x11ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce24) {
            ctx->pc = 0x11CEB4u;
            goto label_11ceb4;
        }
    }
    ctx->pc = 0x11CE2Cu;
label_11ce2c:
    // 0x11ce2c: 0xc0479ea  jal         func_11E7A8
    ctx->pc = 0x11CE2Cu;
    SET_GPR_U32(ctx, 31, 0x11CE34u);
    ctx->pc = 0x11CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE2Cu;
            // 0x11ce30: 0x122023  negu        $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E7A8u;
    if (runtime->hasFunction(0x11E7A8u)) {
        auto targetFn = runtime->lookupFunction(0x11E7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE34u; }
        if (ctx->pc != 0x11CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbnf_0x11e7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE34u; }
        if (ctx->pc != 0x11CE34u) { return; }
    }
    ctx->pc = 0x11CE34u;
label_11ce34:
    // 0x11ce34: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x11ce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x11ce38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ce38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ce3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11ce3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11ce40: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x11ce40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ce44: 0x0  nop
    ctx->pc = 0x11ce44u;
    // NOP
    // 0x11ce48: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x11CE48u;
    {
        const bool branch_taken_0x11ce48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE48u;
            // 0x11ce4c: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce48) {
            ctx->pc = 0x11CE9Cu;
            goto label_11ce9c;
        }
    }
    ctx->pc = 0x11CE50u;
    // 0x11ce50: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x11ce50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x11ce54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ce54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ce58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11ce58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ce5c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11ce60: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11ce60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11ce64: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11ce68: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x11ce68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x11ce6c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ce6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11ce70: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11ce70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11ce74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11ce74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ce78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11ce78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11ce7c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x11ce7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11ce80: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11ce80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11ce84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ce84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11ce88: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x11ce88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11ce8c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ce8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11ce90: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x11ce90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11ce94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11CE94u;
    {
        const bool branch_taken_0x11ce94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE94u;
            // 0x11ce98: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce94) {
            ctx->pc = 0x11CEB4u;
            goto label_11ceb4;
        }
    }
    ctx->pc = 0x11CE9Cu;
label_11ce9c:
    // 0x11ce9c: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x11ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x11cea0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11cea0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11cea4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11cea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11cea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CEA8u;
    {
        const bool branch_taken_0x11cea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEA8u;
            // 0x11ceac: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cea8) {
            ctx->pc = 0x11CEB4u;
            goto label_11ceb4;
        }
    }
    ctx->pc = 0x11CEB0u;
label_11ceb0:
    // 0x11ceb0: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x11ceb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_11ceb4:
    // 0x11ceb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ceb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11ceb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11cebc: 0xc0479ea  jal         func_11E7A8
    ctx->pc = 0x11CEBCu;
    SET_GPR_U32(ctx, 31, 0x11CEC4u);
    ctx->pc = 0x11CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEBCu;
            // 0x11cec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E7A8u;
    if (runtime->hasFunction(0x11E7A8u)) {
        auto targetFn = runtime->lookupFunction(0x11E7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CEC4u; }
        if (ctx->pc != 0x11CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbnf_0x11e7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CEC4u; }
        if (ctx->pc != 0x11CEC4u) { return; }
    }
    ctx->pc = 0x11CEC4u;
label_11cec4:
    // 0x11cec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11cec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cec8: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CEC8u;
    {
        const bool branch_taken_0x11cec8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x11CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEC8u;
            // 0x11cecc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cec8) {
            ctx->pc = 0x11CF10u;
            goto label_11cf10;
        }
    }
    ctx->pc = 0x11CED0u;
    // 0x11ced0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11ced4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x11ced4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x11ced8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ced8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cedc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x11cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x11cee0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x11cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x11cee4: 0x0  nop
    ctx->pc = 0x11cee4u;
    // NOP
label_11cee8:
    // 0x11cee8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ceec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11ceecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11cef0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11cef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11cef4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x11cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x11cef8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11cef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11cefc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x11cefcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11cf00: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11cf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11cf04: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11CF04u;
    {
        const bool branch_taken_0x11cf04 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11CF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF04u;
            // 0x11cf08: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf04) {
            ctx->pc = 0x11CEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cee8;
        }
    }
    ctx->pc = 0x11CF0Cu;
    // 0x11cf0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11cf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11cf10:
    // 0x11cf10: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x11CF10u;
    {
        const bool branch_taken_0x11cf10 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x11cf10) {
            ctx->pc = 0x11CF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF10u;
            // 0x11cf14: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CFB0u;
            goto label_11cfb0;
        }
    }
    ctx->pc = 0x11CF18u;
    // 0x11cf18: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11cf18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11cf1c: 0x0  nop
    ctx->pc = 0x11cf1cu;
    // NOP
label_11cf20:
    // 0x11cf20: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x11cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x11cf24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11cf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cf28: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11CF28u;
    {
        const bool branch_taken_0x11cf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF28u;
            // 0x11cf2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf28) {
            ctx->pc = 0x11CF90u;
            goto label_11cf90;
        }
    }
    ctx->pc = 0x11CF30u;
    // 0x11cf30: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x11cf30u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x11cf34: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11CF34u;
    {
        const bool branch_taken_0x11cf34 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x11CF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF34u;
            // 0x11cf38: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf34) {
            ctx->pc = 0x11CF94u;
            goto label_11cf94;
        }
    }
    ctx->pc = 0x11CF3Cu;
    // 0x11cf3c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x11cf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11cf40: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x11cf40u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
    // 0x11cf44: 0x0  nop
    ctx->pc = 0x11cf44u;
    // NOP
label_11cf48:
    // 0x11cf48: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x11cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11cf4c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x11cf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11cf50: 0x256217e0  addiu       $v0, $t3, 0x17E0
    ctx->pc = 0x11cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 6112));
    // 0x11cf54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11cf58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11cf5c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x11cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x11cf60: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x11cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cf64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11cf64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11cf68: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x11cf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cf6c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x11cf6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11cf70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11cf70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11cf74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CF74u;
    {
        const bool branch_taken_0x11cf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF74u;
            // 0x11cf78: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf74) {
            ctx->pc = 0x11CF98u;
            goto label_11cf98;
        }
    }
    ctx->pc = 0x11CF7Cu;
    // 0x11cf7c: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x11cf7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11cf80: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11CF80u;
    {
        const bool branch_taken_0x11cf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF80u;
            // 0x11cf84: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf80) {
            ctx->pc = 0x11CF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cf48;
        }
    }
    ctx->pc = 0x11CF88u;
    // 0x11cf88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11CF88u;
    {
        const bool branch_taken_0x11cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF88u;
            // 0x11cf8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf88) {
            ctx->pc = 0x11CFA0u;
            goto label_11cfa0;
        }
    }
    ctx->pc = 0x11CF90u;
label_11cf90:
    // 0x11cf90: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x11cf90u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_11cf94:
    // 0x11cf94: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x11cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_11cf98:
    // 0x11cf98: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x11cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x11cf9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11cf9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11cfa0:
    // 0x11cfa0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11cfa4: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11CFA4u;
    {
        const bool branch_taken_0x11cfa4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11CFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFA4u;
            // 0x11cfa8: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfa4) {
            ctx->pc = 0x11CF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cf20;
        }
    }
    ctx->pc = 0x11CFACu;
    // 0x11cfac: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x11cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_11cfb0:
    // 0x11cfb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CFB0u;
    {
        const bool branch_taken_0x11cfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFB0u;
            // 0x11cfb4: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfb0) {
            ctx->pc = 0x11CFD0u;
            goto label_11cfd0;
        }
    }
    ctx->pc = 0x11CFB8u;
    // 0x11cfb8: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11CFB8u;
    {
        const bool branch_taken_0x11cfb8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x11cfb8) {
            ctx->pc = 0x11CFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFB8u;
            // 0x11cfbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D038u;
            goto label_11d038;
        }
    }
    ctx->pc = 0x11CFC0u;
    // 0x11cfc0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CFC0u;
    {
        const bool branch_taken_0x11cfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFC0u;
            // 0x11cfc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfc0) {
            ctx->pc = 0x11CFE8u;
            goto label_11cfe8;
        }
    }
    ctx->pc = 0x11CFC8u;
    // 0x11cfc8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x11CFC8u;
    {
        const bool branch_taken_0x11cfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFC8u;
            // 0x11cfcc: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfc8) {
            ctx->pc = 0x11D1FCu;
            goto label_11d1fc;
        }
    }
    ctx->pc = 0x11CFD0u;
label_11cfd0:
    // 0x11cfd0: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x11cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x11cfd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11cfd8: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x11CFD8u;
    {
        const bool branch_taken_0x11cfd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFD8u;
            // 0x11cfdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfd8) {
            ctx->pc = 0x11D0DCu;
            goto label_11d0dc;
        }
    }
    ctx->pc = 0x11CFE0u;
    // 0x11cfe0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x11CFE0u;
    {
        const bool branch_taken_0x11cfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFE0u;
            // 0x11cfe4: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfe0) {
            ctx->pc = 0x11D1FCu;
            goto label_11d1fc;
        }
    }
    ctx->pc = 0x11CFE8u;
label_11cfe8:
    // 0x11cfe8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11cfe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11cfecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cff0: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x11CFF0u;
    {
        const bool branch_taken_0x11cff0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x11cff0) {
            ctx->pc = 0x11CFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFF0u;
            // 0x11cff4: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D020u;
            goto label_11d020;
        }
    }
    ctx->pc = 0x11CFF8u;
    // 0x11cff8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11cff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11cffc: 0x0  nop
    ctx->pc = 0x11cffcu;
    // NOP
label_11d000:
    // 0x11d000: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11d000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11d004: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11d008: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11d008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11d00c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d010: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11d010u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11d014: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D014u;
    {
        const bool branch_taken_0x11d014 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11d014) {
            ctx->pc = 0x11D000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d000;
        }
    }
    ctx->pc = 0x11D01Cu;
    // 0x11d01c: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x11d01cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_11d020:
    // 0x11d020: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x11d020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11d024: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x11D024u;
    {
        const bool branch_taken_0x11d024 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D024u;
            // 0x11d028: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d024) {
            ctx->pc = 0x11D1F8u;
            goto label_11d1f8;
        }
    }
    ctx->pc = 0x11D02Cu;
    // 0x11d02c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11d02cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x11d030: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x11D030u;
    {
        const bool branch_taken_0x11d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D030u;
            // 0x11d034: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d030) {
            ctx->pc = 0x11D1F8u;
            goto label_11d1f8;
        }
    }
    ctx->pc = 0x11D038u;
label_11d038:
    // 0x11d038: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11d038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d03c: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x11D03Cu;
    {
        const bool branch_taken_0x11d03c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x11D040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D03Cu;
            // 0x11d040: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d03c) {
            ctx->pc = 0x11D074u;
            goto label_11d074;
        }
    }
    ctx->pc = 0x11D044u;
    // 0x11d044: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11d044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11d048: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x11d048u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x11d04c: 0x0  nop
    ctx->pc = 0x11d04cu;
    // NOP
label_11d050:
    // 0x11d050: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11d050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11d054: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11d054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11d058: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11d058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11d05c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11d05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d060: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11d060u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11d064: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D064u;
    {
        const bool branch_taken_0x11d064 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11d064) {
            ctx->pc = 0x11D050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d050;
        }
    }
    ctx->pc = 0x11D06Cu;
    // 0x11d06c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D06Cu;
    {
        const bool branch_taken_0x11d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D06Cu;
            // 0x11d070: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d06c) {
            ctx->pc = 0x11D07Cu;
            goto label_11d07c;
        }
    }
    ctx->pc = 0x11D074u;
label_11d074:
    // 0x11d074: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x11d074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x11d078: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x11d078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_11d07c:
    // 0x11d07c: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x11d07cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11d080: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D080u;
    {
        const bool branch_taken_0x11d080 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d080) {
            ctx->pc = 0x11D084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D080u;
            // 0x11d084: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D094u;
            goto label_11d094;
        }
    }
    ctx->pc = 0x11D088u;
    // 0x11d088: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11d088u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x11d08c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x11d08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x11d090: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x11d090u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_11d094:
    // 0x11d094: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11D094u;
    {
        const bool branch_taken_0x11d094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D094u;
            // 0x11d098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d094) {
            ctx->pc = 0x11D0C0u;
            goto label_11d0c0;
        }
    }
    ctx->pc = 0x11D09Cu;
    // 0x11d09c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11d09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11d0a0:
    // 0x11d0a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11d0a4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11d0a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11d0ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d0b0: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x11d0b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11d0b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11d0b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11d0b8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11D0B8u;
    {
        const bool branch_taken_0x11d0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d0b8) {
            ctx->pc = 0x11D0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d0a0;
        }
    }
    ctx->pc = 0x11D0C0u;
label_11d0c0:
    // 0x11d0c0: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x11d0c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x11d0c4: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x11d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11d0c8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x11D0C8u;
    {
        const bool branch_taken_0x11d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0C8u;
            // 0x11d0cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0c8) {
            ctx->pc = 0x11D1F8u;
            goto label_11d1f8;
        }
    }
    ctx->pc = 0x11D0D0u;
    // 0x11d0d0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11d0d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x11d0d4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x11D0D4u;
    {
        const bool branch_taken_0x11d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0D4u;
            // 0x11d0d8: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0d4) {
            ctx->pc = 0x11D1F8u;
            goto label_11d1f8;
        }
    }
    ctx->pc = 0x11D0DCu;
label_11d0dc:
    // 0x11d0dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0e0: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D0E0u;
    {
        const bool branch_taken_0x11d0e0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x11D0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0E0u;
            // 0x11d0e4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0e0) {
            ctx->pc = 0x11D130u;
            goto label_11d130;
        }
    }
    ctx->pc = 0x11D0E8u;
    // 0x11d0e8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11d0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11d0ec: 0x0  nop
    ctx->pc = 0x11d0ecu;
    // NOP
label_11d0f0:
    // 0x11d0f0: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x11d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11d0f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11d0f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11d0fc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11d100: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x11d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11d104: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11d104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d108: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d10c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11d10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d110: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x11d110u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11d114: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11d114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11d118: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11d118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11d11c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x11d11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11d120: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x11D120u;
    {
        const bool branch_taken_0x11d120 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11D124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D120u;
            // 0x11d124: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d120) {
            ctx->pc = 0x11D0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d0f0;
        }
    }
    ctx->pc = 0x11D128u;
    // 0x11d128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d12c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x11d12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_11d130:
    // 0x11d130: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D130u;
    {
        const bool branch_taken_0x11d130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d130) {
            ctx->pc = 0x11D134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D130u;
            // 0x11d134: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D180u;
            goto label_11d180;
        }
    }
    ctx->pc = 0x11D138u;
    // 0x11d138: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11d138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11d13c: 0x0  nop
    ctx->pc = 0x11d13cu;
    // NOP
label_11d140:
    // 0x11d140: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x11d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11d144: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11d144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11d148: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11d148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11d14c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11d150: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x11d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11d154: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d158: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11d158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d15c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11d15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d160: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x11d160u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d164: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x11d164u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11d168: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11d168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11d16c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11d16cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11d170: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x11d170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11d174: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11D174u;
    {
        const bool branch_taken_0x11d174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D174u;
            // 0x11d178: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d174) {
            ctx->pc = 0x11D140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d140;
        }
    }
    ctx->pc = 0x11D17Cu;
    // 0x11d17c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d180:
    // 0x11d180: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11d180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d184: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x11d184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d188: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11D188u;
    {
        const bool branch_taken_0x11d188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D188u;
            // 0x11d18c: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d188) {
            ctx->pc = 0x11D1C0u;
            goto label_11d1c0;
        }
    }
    ctx->pc = 0x11D190u;
    // 0x11d190: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11d190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11d194: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x11d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11d198:
    // 0x11d198: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11d198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11d19c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11d1a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11d1a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d1a8: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x11d1a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d1ac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11d1acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11d1b0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11D1B0u;
    {
        const bool branch_taken_0x11d1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1b0) {
            ctx->pc = 0x11D198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d198;
        }
    }
    ctx->pc = 0x11D1B8u;
    // 0x11d1b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D1B8u;
    {
        const bool branch_taken_0x11d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1B8u;
            // 0x11d1bc: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1b8) {
            ctx->pc = 0x11D1C8u;
            goto label_11d1c8;
        }
    }
    ctx->pc = 0x11D1C0u;
label_11d1c0:
    // 0x11d1c0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x11d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d1c4: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x11d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_11d1c8:
    // 0x11d1c8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D1C8u;
    {
        const bool branch_taken_0x11d1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d1c8) {
            ctx->pc = 0x11D1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1C8u;
            // 0x11d1cc: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D1E0u;
            goto label_11d1e0;
        }
    }
    ctx->pc = 0x11D1D0u;
    // 0x11d1d0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x11d1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x11d1d4: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x11d1d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x11d1d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11D1D8u;
    {
        const bool branch_taken_0x11d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1D8u;
            // 0x11d1dc: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1d8) {
            ctx->pc = 0x11D1F4u;
            goto label_11d1f4;
        }
    }
    ctx->pc = 0x11D1E0u;
label_11d1e0:
    // 0x11d1e0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11d1e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11d1e4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11d1e4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11d1e8: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x11d1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x11d1ec: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x11d1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x11d1f0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x11d1f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_11d1f4:
    // 0x11d1f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11d1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11d1f8:
    // 0x11d1f8: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x11d1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_11d1fc:
    // 0x11d1fc: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x11d1fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11d200: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x11d200u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x11d204: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x11d204u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x11d208: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x11d208u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x11d20c: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x11d20cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x11d210: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x11d210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11d214: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x11d214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x11d218: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x11d218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11d21c: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x11d21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x11d220: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x11d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11d224: 0x3e00008  jr          $ra
    ctx->pc = 0x11D224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D224u;
            // 0x11d228: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D22Cu;
}
