#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetActionExtendTable__Fv
// Address: 0x2d2160 - 0x2d228c
void SetActionExtendTable__Fv_0x2d2160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActionExtendTable__Fv_0x2d2160");
#endif

    switch (ctx->pc) {
        case 0x2d2180u: goto label_2d2180;
        case 0x2d21bcu: goto label_2d21bc;
        case 0x2d21e8u: goto label_2d21e8;
        case 0x2d2204u: goto label_2d2204;
        case 0x2d2244u: goto label_2d2244;
        default: break;
    }

    ctx->pc = 0x2d2160u;

    // 0x2d2160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d216c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d216cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2178: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2d2178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2d217c: 0x2484d440  addiu       $a0, $a0, -0x2BC0
    ctx->pc = 0x2d217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956096));
label_2d2180:
    // 0x2d2180: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2d2180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d2184: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2d2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2d2188: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2d2188u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2d218c: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x2d218cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d2190: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2d2190u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2d2194: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2d2194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2d2198: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2d2198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2d219c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2d219cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2d21a0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2d21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2d21a4: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2d21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2d21a8: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2d21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2d21ac: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D21ACu;
    {
        const bool branch_taken_0x2d21ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D21B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21ACu;
            // 0x2d21b0: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21ac) {
            ctx->pc = 0x2D2180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2180;
        }
    }
    ctx->pc = 0x2D21B4u;
    // 0x2d21b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d21b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d21b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d21bc:
    // 0x2d21bc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2d21bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2d21c0: 0x24a56140  addiu       $a1, $a1, 0x6140
    ctx->pc = 0x2d21c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24896));
    // 0x2d21c4: 0xb04021  addu        $t0, $a1, $s0
    ctx->pc = 0x2d21c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2d21c8: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2d21c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d21cc: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D21CCu;
    {
        const bool branch_taken_0x2d21cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21CCu;
            // 0x2d21d0: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21cc) {
            ctx->pc = 0x2D2274u;
            goto label_2d2274;
        }
    }
    ctx->pc = 0x2D21D4u;
    // 0x2d21d4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D21D4u;
    {
        const bool branch_taken_0x2d21d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21D4u;
            // 0x2d21d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21d4) {
            ctx->pc = 0x2D2220u;
            goto label_2d2220;
        }
    }
    ctx->pc = 0x2D21DCu;
    // 0x2d21dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d21dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21e0: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2d21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d21e4: 0x0  nop
    ctx->pc = 0x2d21e4u;
    // NOP
label_2d21e8:
    // 0x2d21e8: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2d21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2d21ec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2d21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d21f0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D21F0u;
    {
        const bool branch_taken_0x2d21f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d21f0) {
            ctx->pc = 0x2D220Cu;
            goto label_2d220c;
        }
    }
    ctx->pc = 0x2D21F8u;
    // 0x2d21f8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d21fc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2D21FCu;
    SET_GPR_U32(ctx, 31, 0x2D2204u);
    ctx->pc = 0x2D2200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D21FCu;
            // 0x2d2200: 0x24840430  addiu       $a0, $a0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2204u; }
        if (ctx->pc != 0x2D2204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2204u; }
        if (ctx->pc != 0x2D2204u) { return; }
    }
    ctx->pc = 0x2D2204u;
label_2d2204:
    // 0x2d2204: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x2D2204u;
    {
        const bool branch_taken_0x2d2204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2204) {
            ctx->pc = 0x2D2204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2204;
        }
    }
    ctx->pc = 0x2D220Cu;
label_2d220c:
    // 0x2d220c: 0x0  nop
    ctx->pc = 0x2d220cu;
    // NOP
    // 0x2d2210: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d2210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d2214: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x2d2214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d2218: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D2218u;
    {
        const bool branch_taken_0x2d2218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2218u;
            // 0x2d221c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2218) {
            ctx->pc = 0x2D21E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d21e8;
        }
    }
    ctx->pc = 0x2D2220u;
label_2d2220:
    // 0x2d2220: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2d2220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d2224: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2224u;
    {
        const bool branch_taken_0x2d2224 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D2228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2224u;
            // 0x2d2228: 0x28830100  slti        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2224) {
            ctx->pc = 0x2D2234u;
            goto label_2d2234;
        }
    }
    ctx->pc = 0x2D222Cu;
    // 0x2d222c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D222Cu;
    {
        const bool branch_taken_0x2d222c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d222c) {
            ctx->pc = 0x2D224Cu;
            goto label_2d224c;
        }
    }
    ctx->pc = 0x2D2234u;
label_2d2234:
    // 0x2d2234: 0x0  nop
    ctx->pc = 0x2d2234u;
    // NOP
    // 0x2d2238: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d2238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d223c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2D223Cu;
    SET_GPR_U32(ctx, 31, 0x2D2244u);
    ctx->pc = 0x2D2240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D223Cu;
            // 0x2d2240: 0x24840450  addiu       $a0, $a0, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2244u; }
        if (ctx->pc != 0x2D2244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2244u; }
        if (ctx->pc != 0x2D2244u) { return; }
    }
    ctx->pc = 0x2D2244u;
label_2d2244:
    // 0x2d2244: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2244u;
    {
        const bool branch_taken_0x2d2244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2244) {
            ctx->pc = 0x2D2264u;
            goto label_2d2264;
        }
    }
    ctx->pc = 0x2D224Cu;
label_2d224c:
    // 0x2d224c: 0x0  nop
    ctx->pc = 0x2d224cu;
    // NOP
    // 0x2d2250: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2d2250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2d2254: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d2254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2258: 0x2463d440  addiu       $v1, $v1, -0x2BC0
    ctx->pc = 0x2d2258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956096));
    // 0x2d225c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2260: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x2d2260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_2d2264:
    // 0x2d2264: 0x0  nop
    ctx->pc = 0x2d2264u;
    // NOP
    // 0x2d2268: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2d2268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2d226c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x2D226Cu;
    {
        const bool branch_taken_0x2d226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D226Cu;
            // 0x2d2270: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d226c) {
            ctx->pc = 0x2D21BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d21bc;
        }
    }
    ctx->pc = 0x2D2274u;
label_2d2274:
    // 0x2d2274: 0x0  nop
    ctx->pc = 0x2d2274u;
    // NOP
    // 0x2d2278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d227c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d227cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2284: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2284u;
            // 0x2d2288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D228Cu;
}
