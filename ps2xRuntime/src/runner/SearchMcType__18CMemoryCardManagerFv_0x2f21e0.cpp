#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchMcType__18CMemoryCardManagerFv
// Address: 0x2f21e0 - 0x2f2440
void SearchMcType__18CMemoryCardManagerFv_0x2f21e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMcType__18CMemoryCardManagerFv_0x2f21e0");
#endif

    switch (ctx->pc) {
        case 0x2f2274u: goto label_2f2274;
        case 0x2f2284u: goto label_2f2284;
        case 0x2f229cu: goto label_2f229c;
        case 0x2f22d4u: goto label_2f22d4;
        default: break;
    }

    ctx->pc = 0x2f21e0u;

    // 0x2f21e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f21e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f21e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f21e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f21e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f21ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f21ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f21f0: 0x8c8304c8  lw          $v1, 0x4C8($a0)
    ctx->pc = 0x2f21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2f21f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F21F4u;
    {
        const bool branch_taken_0x2f21f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F21F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21F4u;
            // 0x2f21f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21f4) {
            ctx->pc = 0x2F2208u;
            goto label_2f2208;
        }
    }
    ctx->pc = 0x2F21FCu;
    // 0x2f21fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2200: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2200u;
    {
        const bool branch_taken_0x2f2200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2200u;
            // 0x2f2204: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2200) {
            ctx->pc = 0x2F2214u;
            goto label_2f2214;
        }
    }
    ctx->pc = 0x2F2208u;
label_2f2208:
    // 0x2f2208: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2f2208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f220c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f2210: 0x24500d5c  addiu       $s0, $v0, 0xD5C
    ctx->pc = 0x2f2210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f2214:
    // 0x2f2214: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2214u;
    {
        const bool branch_taken_0x2f2214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2214u;
            // 0x2f2218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2214) {
            ctx->pc = 0x2F2224u;
            goto label_2f2224;
        }
    }
    ctx->pc = 0x2F221Cu;
    // 0x2f221c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2F221Cu;
    {
        const bool branch_taken_0x2f221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F221Cu;
            // 0x2f2220: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f221c) {
            ctx->pc = 0x2F2430u;
            goto label_2f2430;
        }
    }
    ctx->pc = 0x2F2224u;
label_2f2224:
    // 0x2f2224: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2f2224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f2228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2228u;
    {
        const bool branch_taken_0x2f2228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2228) {
            ctx->pc = 0x2F2238u;
            goto label_2f2238;
        }
    }
    ctx->pc = 0x2F2230u;
    // 0x2f2230: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f2230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f2234: 0xaf829ee4  sw          $v0, -0x611C($gp)
    ctx->pc = 0x2f2234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942436), GPR_U32(ctx, 2));
label_2f2238:
    // 0x2f2238: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2f2238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f223c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F223Cu;
    {
        const bool branch_taken_0x2f223c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F2240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F223Cu;
            // 0x2f2240: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f223c) {
            ctx->pc = 0x2F2250u;
            goto label_2f2250;
        }
    }
    ctx->pc = 0x2F2244u;
    // 0x2f2244: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2244u;
    {
        const bool branch_taken_0x2f2244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2244u;
            // 0x2f2248: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2244) {
            ctx->pc = 0x2F2254u;
            goto label_2f2254;
        }
    }
    ctx->pc = 0x2F224Cu;
    // 0x2f224c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2f224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2f2250:
    // 0x2f2250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2254:
    // 0x2f2254: 0x1044001d  beq         $v0, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F2254u;
    {
        const bool branch_taken_0x2f2254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F2258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2254u;
            // 0x2f2258: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2254) {
            ctx->pc = 0x2F22CCu;
            goto label_2f22cc;
        }
    }
    ctx->pc = 0x2F225Cu;
    // 0x2f225c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F225Cu;
    {
        const bool branch_taken_0x2f225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F225Cu;
            // 0x2f2260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f225c) {
            ctx->pc = 0x2F226Cu;
            goto label_2f226c;
        }
    }
    ctx->pc = 0x2F2264u;
    // 0x2f2264: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2F2264u;
    {
        const bool branch_taken_0x2f2264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2264u;
            // 0x2f2268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2264) {
            ctx->pc = 0x2F242Cu;
            goto label_2f242c;
        }
    }
    ctx->pc = 0x2F226Cu;
label_2f226c:
    // 0x2f226c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F226Cu;
    SET_GPR_U32(ctx, 31, 0x2F2274u);
    ctx->pc = 0x2F2270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F226Cu;
            // 0x2f2270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2274u; }
        if (ctx->pc != 0x2F2274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2274u; }
        if (ctx->pc != 0x2F2274u) { return; }
    }
    ctx->pc = 0x2F2274u;
label_2f2274:
    // 0x2f2274: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2F2274u;
    {
        const bool branch_taken_0x2f2274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2274u;
            // 0x2f2278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2274) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F227Cu;
    // 0x2f227c: 0xc0bc64c  jal         func_2F1930
    ctx->pc = 0x2F227Cu;
    SET_GPR_U32(ctx, 31, 0x2F2284u);
    ctx->pc = 0x2F1930u;
    if (runtime->hasFunction(0x2F1930u)) {
        auto targetFn = runtime->lookupFunction(0x2F1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2284u; }
        if (ctx->pc != 0x2F2284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitError__18CMemoryCardManagerFv_0x2f1930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2284u; }
        if (ctx->pc != 0x2F2284u) { return; }
    }
    ctx->pc = 0x2F2284u;
label_2f2284:
    // 0x2f2284: 0x8e2404c8  lw          $a0, 0x4C8($s1)
    ctx->pc = 0x2f2284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
    // 0x2f2288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f228c: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x2f228cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2f2290: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x2f2290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2f2294: 0xc048bc8  jal         func_122F20
    ctx->pc = 0x2F2294u;
    SET_GPR_U32(ctx, 31, 0x2F229Cu);
    ctx->pc = 0x2F2298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2294u;
            // 0x2f2298: 0x26080008  addiu       $t0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F20u;
    if (runtime->hasFunction(0x122F20u)) {
        auto targetFn = runtime->lookupFunction(0x122F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F229Cu; }
        if (ctx->pc != 0x2F229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetInfo_0x122f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F229Cu; }
        if (ctx->pc != 0x2F229Cu) { return; }
    }
    ctx->pc = 0x2F229Cu;
label_2f229c:
    // 0x2f229c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F229Cu;
    {
        const bool branch_taken_0x2f229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F22A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F229Cu;
            // 0x2f22a0: 0x2403ff38  addiu       $v1, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f229c) {
            ctx->pc = 0x2F22B4u;
            goto label_2f22b4;
        }
    }
    ctx->pc = 0x2F22A4u;
    // 0x2f22a4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2f22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f22a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f22ac: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2F22ACu;
    {
        const bool branch_taken_0x2f22ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22ACu;
            // 0x2f22b0: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22ac) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F22B4u;
label_2f22b4:
    // 0x2f22b4: 0x1043005c  beq         $v0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F22B4u;
    {
        const bool branch_taken_0x2f22b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f22b4) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F22BCu;
    // 0x2f22bc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2f22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f22c0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2f22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2f22c4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2F22C4u;
    {
        const bool branch_taken_0x2f22c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22C4u;
            // 0x2f22c8: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22c4) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F22CCu;
label_2f22cc:
    // 0x2f22cc: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F22CCu;
    SET_GPR_U32(ctx, 31, 0x2F22D4u);
    ctx->pc = 0x2F22D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22CCu;
            // 0x2f22d0: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F22D4u; }
        if (ctx->pc != 0x2F22D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F22D4u; }
        if (ctx->pc != 0x2F22D4u) { return; }
    }
    ctx->pc = 0x2F22D4u;
label_2f22d4:
    // 0x2f22d4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2F22D4u;
    {
        const bool branch_taken_0x2f22d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22D4u;
            // 0x2f22d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22d4) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F22DCu;
    // 0x2f22dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2f22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f22e0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2f22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2f22e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2f22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2f22e8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2f22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2f22ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2f22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2f22f0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F22F0u;
    {
        const bool branch_taken_0x2f22f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F22F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22F0u;
            // 0x2f22f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22f0) {
            ctx->pc = 0x2F2318u;
            goto label_2f2318;
        }
    }
    ctx->pc = 0x2F22F8u;
    // 0x2f22f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F22F8u;
    {
        const bool branch_taken_0x2f22f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f22f8) {
            ctx->pc = 0x2F2310u;
            goto label_2f2310;
        }
    }
    ctx->pc = 0x2F2300u;
    // 0x2f2300: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F2300u;
    {
        const bool branch_taken_0x2f2300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2300) {
            ctx->pc = 0x2F232Cu;
            goto label_2f232c;
        }
    }
    ctx->pc = 0x2F2308u;
    // 0x2f2308: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2308u;
    {
        const bool branch_taken_0x2f2308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2308u;
            // 0x2f230c: 0x2861fff6  slti        $at, $v1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2308) {
            ctx->pc = 0x2F2320u;
            goto label_2f2320;
        }
    }
    ctx->pc = 0x2F2310u;
label_2f2310:
    // 0x2f2310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2310u;
    {
        const bool branch_taken_0x2f2310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2310u;
            // 0x2f2314: 0xae040008  sw          $a0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2310) {
            ctx->pc = 0x2F232Cu;
            goto label_2f232c;
        }
    }
    ctx->pc = 0x2F2318u;
label_2f2318:
    // 0x2f2318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2318u;
    {
        const bool branch_taken_0x2f2318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2318u;
            // 0x2f231c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2318) {
            ctx->pc = 0x2F232Cu;
            goto label_2f232c;
        }
    }
    ctx->pc = 0x2F2320u;
label_2f2320:
    // 0x2f2320: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2320u;
    {
        const bool branch_taken_0x2f2320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2320) {
            ctx->pc = 0x2F232Cu;
            goto label_2f232c;
        }
    }
    ctx->pc = 0x2F2328u;
    // 0x2f2328: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f2328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f232c:
    // 0x2f232c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2f232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f2330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f2334: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x2f2334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x2f2338: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2f2338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f233c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2f233cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f2340: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F2340u;
    {
        const bool branch_taken_0x2f2340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2340u;
            // 0x2f2344: 0x2882000a  slti        $v0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2340) {
            ctx->pc = 0x2F23A4u;
            goto label_2f23a4;
        }
    }
    ctx->pc = 0x2F2348u;
    // 0x2f2348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f2348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f234c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F234Cu;
    {
        const bool branch_taken_0x2f234c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f234c) {
            ctx->pc = 0x2F23A0u;
            goto label_2f23a0;
        }
    }
    ctx->pc = 0x2F2354u;
    // 0x2f2354: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2f2354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f2358: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F2358u;
    {
        const bool branch_taken_0x2f2358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2358) {
            ctx->pc = 0x2F23A0u;
            goto label_2f23a0;
        }
    }
    ctx->pc = 0x2F2360u;
    // 0x2f2360: 0x8f829ee4  lw          $v0, -0x611C($gp)
    ctx->pc = 0x2f2360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942436)));
    // 0x2f2364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2364u;
    {
        const bool branch_taken_0x2f2364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2364) {
            ctx->pc = 0x2F2378u;
            goto label_2f2378;
        }
    }
    ctx->pc = 0x2F236Cu;
    // 0x2f236c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F236Cu;
    {
        const bool branch_taken_0x2f236c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f236c) {
            ctx->pc = 0x2F2378u;
            goto label_2f2378;
        }
    }
    ctx->pc = 0x2F2374u;
    // 0x2f2374: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2f2374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2f2378:
    // 0x2f2378: 0x8f829ee4  lw          $v0, -0x611C($gp)
    ctx->pc = 0x2f2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942436)));
    // 0x2f237c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F237Cu;
    {
        const bool branch_taken_0x2f237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F237Cu;
            // 0x2f2380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f237c) {
            ctx->pc = 0x2F2398u;
            goto label_2f2398;
        }
    }
    ctx->pc = 0x2F2384u;
    // 0x2f2384: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f2388: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2388u;
    {
        const bool branch_taken_0x2f2388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2388u;
            // 0x2f238c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2388) {
            ctx->pc = 0x2F2394u;
            goto label_2f2394;
        }
    }
    ctx->pc = 0x2F2390u;
    // 0x2f2390: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2f2390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2f2394:
    // 0x2f2394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2398:
    // 0x2f2398: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2F2398u;
    {
        const bool branch_taken_0x2f2398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2398) {
            ctx->pc = 0x2F242Cu;
            goto label_2f242c;
        }
    }
    ctx->pc = 0x2F23A0u;
label_2f23a0:
    // 0x2f23a0: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x2f23a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_2f23a4:
    // 0x2f23a4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F23A4u;
    {
        const bool branch_taken_0x2f23a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f23a4) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F23ACu;
    // 0x2f23ac: 0x8f829ee4  lw          $v0, -0x611C($gp)
    ctx->pc = 0x2f23acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942436)));
    // 0x2f23b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F23B0u;
    {
        const bool branch_taken_0x2f23b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f23b0) {
            ctx->pc = 0x2F23C8u;
            goto label_2f23c8;
        }
    }
    ctx->pc = 0x2F23B8u;
    // 0x2f23b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f23bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F23BCu;
    {
        const bool branch_taken_0x2f23bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f23bc) {
            ctx->pc = 0x2F23C8u;
            goto label_2f23c8;
        }
    }
    ctx->pc = 0x2F23C4u;
    // 0x2f23c4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2f23c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2f23c8:
    // 0x2f23c8: 0x8f829ee4  lw          $v0, -0x611C($gp)
    ctx->pc = 0x2f23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942436)));
    // 0x2f23cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F23CCu;
    {
        const bool branch_taken_0x2f23cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f23cc) {
            ctx->pc = 0x2F23E4u;
            goto label_2f23e4;
        }
    }
    ctx->pc = 0x2F23D4u;
    // 0x2f23d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f23d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F23D8u;
    {
        const bool branch_taken_0x2f23d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f23d8) {
            ctx->pc = 0x2F23E4u;
            goto label_2f23e4;
        }
    }
    ctx->pc = 0x2F23E0u;
    // 0x2f23e0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2f23e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2f23e4:
    // 0x2f23e4: 0x8f829ee4  lw          $v0, -0x611C($gp)
    ctx->pc = 0x2f23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942436)));
    // 0x2f23e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F23E8u;
    {
        const bool branch_taken_0x2f23e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f23e8) {
            ctx->pc = 0x2F2400u;
            goto label_2f2400;
        }
    }
    ctx->pc = 0x2F23F0u;
    // 0x2f23f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f23f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F23F4u;
    {
        const bool branch_taken_0x2f23f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F23F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23F4u;
            // 0x2f23f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23f4) {
            ctx->pc = 0x2F2400u;
            goto label_2f2400;
        }
    }
    ctx->pc = 0x2F23FCu;
    // 0x2f23fc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2f23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2f2400:
    // 0x2f2400: 0x8f829ee4  lw          $v0, -0x611C($gp)
    ctx->pc = 0x2f2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942436)));
    // 0x2f2404: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2404u;
    {
        const bool branch_taken_0x2f2404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2404u;
            // 0x2f2408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2404) {
            ctx->pc = 0x2F2420u;
            goto label_2f2420;
        }
    }
    ctx->pc = 0x2F240Cu;
    // 0x2f240c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f2410: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2410u;
    {
        const bool branch_taken_0x2f2410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2410u;
            // 0x2f2414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2410) {
            ctx->pc = 0x2F241Cu;
            goto label_2f241c;
        }
    }
    ctx->pc = 0x2F2418u;
    // 0x2f2418: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2f2418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2f241c:
    // 0x2f241c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2420:
    // 0x2f2420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2420u;
    {
        const bool branch_taken_0x2f2420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2420) {
            ctx->pc = 0x2F242Cu;
            goto label_2f242c;
        }
    }
    ctx->pc = 0x2F2428u;
label_2f2428:
    // 0x2f2428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f242c:
    // 0x2f242c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2430:
    // 0x2f2430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2438: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2438u;
            // 0x2f243c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F2440u;
}
