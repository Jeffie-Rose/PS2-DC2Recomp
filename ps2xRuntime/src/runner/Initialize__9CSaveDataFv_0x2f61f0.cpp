#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CSaveDataFv
// Address: 0x2f61f0 - 0x2f63a4
void Initialize__9CSaveDataFv_0x2f61f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CSaveDataFv_0x2f61f0");
#endif

    switch (ctx->pc) {
        case 0x2f6218u: goto label_2f6218;
        case 0x2f622cu: goto label_2f622c;
        case 0x2f6244u: goto label_2f6244;
        case 0x2f6280u: goto label_2f6280;
        case 0x2f62d4u: goto label_2f62d4;
        case 0x2f62e0u: goto label_2f62e0;
        case 0x2f6304u: goto label_2f6304;
        case 0x2f6314u: goto label_2f6314;
        case 0x2f6324u: goto label_2f6324;
        case 0x2f6334u: goto label_2f6334;
        case 0x2f6344u: goto label_2f6344;
        case 0x2f635cu: goto label_2f635c;
        case 0x2f6364u: goto label_2f6364;
        case 0x2f637cu: goto label_2f637c;
        default: break;
    }

    ctx->pc = 0x2f61f0u;

    // 0x2f61f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f61f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f61f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2f61f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f61f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f61f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f61fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f6200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f6204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f620c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2f620cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2f6210: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2F6210u;
    SET_GPR_U32(ctx, 31, 0x2F6218u);
    ctx->pc = 0x2F6214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6210u;
            // 0x2f6214: 0x248419c8  addiu       $a0, $a0, 0x19C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6218u; }
        if (ctx->pc != 0x2F6218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6218u; }
        if (ctx->pc != 0x2F6218u) { return; }
    }
    ctx->pc = 0x2F6218u;
label_2f6218:
    // 0x2f6218: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f6218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f621c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6224: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F6224u;
    SET_GPR_U32(ctx, 31, 0x2F622Cu);
    ctx->pc = 0x2F6228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6224u;
            // 0x2f6228: 0x34465930  ori         $a2, $v0, 0x5930 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F622Cu; }
        if (ctx->pc != 0x2F622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F622Cu; }
        if (ctx->pc != 0x2F622Cu) { return; }
    }
    ctx->pc = 0x2F622Cu;
label_2f622c:
    // 0x2f622c: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2f622cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2f6230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6234: 0xae031a10  sw          $v1, 0x1A10($s0)
    ctx->pc = 0x2f6234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6672), GPR_U32(ctx, 3));
    // 0x2f6238: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f623c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f623cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6240: 0xae021a08  sw          $v0, 0x1A08($s0)
    ctx->pc = 0x2f6240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6664), GPR_U32(ctx, 2));
label_2f6244:
    // 0x2f6244: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2f6244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2f6248: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2f6248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2f624c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f624cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f6250: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x2f6250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2f6254: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f6254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f6258: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f6258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f625c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2f625cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2f6260: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2f6260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2f6264: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2f6264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2f6268: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2f6268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2f626c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2f626cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x2f6270: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F6270u;
    {
        const bool branch_taken_0x2f6270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6270u;
            // 0x2f6274: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6270) {
            ctx->pc = 0x2F6244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6244;
        }
    }
    ctx->pc = 0x2F6278u;
    // 0x2f6278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f627c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f627cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6280:
    // 0x2f6280: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2f6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2f6284: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f6284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f6288: 0xa4800100  sh          $zero, 0x100($a0)
    ctx->pc = 0x2f6288u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f628c: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x2f628cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f6290: 0xa4800102  sh          $zero, 0x102($a0)
    ctx->pc = 0x2f6290u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 258), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f6294: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f6294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f6298: 0xa4800104  sh          $zero, 0x104($a0)
    ctx->pc = 0x2f6298u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f629c: 0xa4800106  sh          $zero, 0x106($a0)
    ctx->pc = 0x2f629cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 262), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f62a0: 0xa4800108  sh          $zero, 0x108($a0)
    ctx->pc = 0x2f62a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 264), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f62a4: 0xa480010a  sh          $zero, 0x10A($a0)
    ctx->pc = 0x2f62a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 266), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f62a8: 0xa480010c  sh          $zero, 0x10C($a0)
    ctx->pc = 0x2f62a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 268), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f62ac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F62ACu;
    {
        const bool branch_taken_0x2f62ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F62B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F62ACu;
            // 0x2f62b0: 0xa480010e  sh          $zero, 0x10E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 270), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62ac) {
            ctx->pc = 0x2F6280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6280;
        }
    }
    ctx->pc = 0x2F62B4u;
    // 0x2f62b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f62b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f62b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62bc: 0xa6021a18  sh          $v0, 0x1A18($s0)
    ctx->pc = 0x2f62bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6680), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f62c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f62c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62c4: 0xa6021a1a  sh          $v0, 0x1A1A($s0)
    ctx->pc = 0x2f62c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6682), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f62c8: 0xa6021a1c  sh          $v0, 0x1A1C($s0)
    ctx->pc = 0x2f62c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6684), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f62cc: 0xa6021a1e  sh          $v0, 0x1A1E($s0)
    ctx->pc = 0x2f62ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6686), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f62d0: 0xae021a20  sw          $v0, 0x1A20($s0)
    ctx->pc = 0x2f62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 2));
label_2f62d4:
    // 0x2f62d4: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2f62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2f62d8: 0xc0aa270  jal         func_2A89C0
    ctx->pc = 0x2F62D8u;
    SET_GPR_U32(ctx, 31, 0x2F62E0u);
    ctx->pc = 0x2F62DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F62D8u;
            // 0x2f62dc: 0x24441c24  addiu       $a0, $v0, 0x1C24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A89C0u;
    if (runtime->hasFunction(0x2A89C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A89C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F62E0u; }
        if (ctx->pc != 0x2F62E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CEditDataFv_0x2a89c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F62E0u; }
        if (ctx->pc != 0x2F62E0u) { return; }
    }
    ctx->pc = 0x2F62E0u;
label_2f62e0:
    // 0x2f62e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f62e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f62e4: 0x26315510  addiu       $s1, $s1, 0x5510
    ctx->pc = 0x2f62e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21776));
    // 0x2f62e8: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2f62e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f62ec: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F62ECu;
    {
        const bool branch_taken_0x2f62ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f62ec) {
            ctx->pc = 0x2F62D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f62d4;
        }
    }
    ctx->pc = 0x2F62F4u;
    // 0x2f62f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f62f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f62f8: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2f62f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x2f62fc: 0xc0bdcc4  jal         func_2F7310
    ctx->pc = 0x2F62FCu;
    SET_GPR_U32(ctx, 31, 0x2F6304u);
    ctx->pc = 0x2F6300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F62FCu;
            // 0x2f6300: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7310u;
    if (runtime->hasFunction(0x2F7310u)) {
        auto targetFn = runtime->lookupFunction(0x2F7310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6304u; }
        if (ctx->pc != 0x2F6304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CSaveDataDungeonFv_0x2f7310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6304u; }
        if (ctx->pc != 0x2F6304u) { return; }
    }
    ctx->pc = 0x2F6304u;
label_2f6304:
    // 0x2f6304: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f6304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f6308: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x2f6308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x2f630c: 0xc0bd86c  jal         func_2F61B0
    ctx->pc = 0x2F630Cu;
    SET_GPR_U32(ctx, 31, 0x2F6314u);
    ctx->pc = 0x2F6310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F630Cu;
            // 0x2f6310: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F61B0u;
    if (runtime->hasFunction(0x2F61B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F61B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6314u; }
        if (ctx->pc != 0x2F6314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSV_CONFIG_OPTION__FP16SV_CONFIG_OPTION_0x2f61b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6314u; }
        if (ctx->pc != 0x2F6314u) { return; }
    }
    ctx->pc = 0x2F6314u;
label_2f6314:
    // 0x2f6314: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f6314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f6318: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2f6318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2f631c: 0xc066c58  jal         func_19B160
    ctx->pc = 0x2F631Cu;
    SET_GPR_U32(ctx, 31, 0x2F6324u);
    ctx->pc = 0x2F6320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F631Cu;
            // 0x2f6320: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B160u;
    if (runtime->hasFunction(0x19B160u)) {
        auto targetFn = runtime->lookupFunction(0x19B160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6324u; }
        if (ctx->pc != 0x2F6324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CUserDataManagerFv_0x19b160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6324u; }
        if (ctx->pc != 0x2F6324u) { return; }
    }
    ctx->pc = 0x2F6324u;
label_2f6324:
    // 0x2f6324: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6328: 0x342140c0  ori         $at, $at, 0x40C0
    ctx->pc = 0x2f6328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16576);
    // 0x2f632c: 0xc0bc4c0  jal         func_2F1300
    ctx->pc = 0x2F632Cu;
    SET_GPR_U32(ctx, 31, 0x2F6334u);
    ctx->pc = 0x2F6330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F632Cu;
            // 0x2f6330: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1300u;
    if (runtime->hasFunction(0x2F1300u)) {
        auto targetFn = runtime->lookupFunction(0x2F1300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6334u; }
        if (ctx->pc != 0x2F6334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSystemDataInit__15CMenuSystemDataFv_0x2f1300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6334u; }
        if (ctx->pc != 0x2F6334u) { return; }
    }
    ctx->pc = 0x2F6334u;
label_2f6334:
    // 0x2f6334: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6338: 0x34212a40  ori         $at, $at, 0x2A40
    ctx->pc = 0x2f6338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10816);
    // 0x2f633c: 0xc0c6a8c  jal         func_31AA30
    ctx->pc = 0x2F633Cu;
    SET_GPR_U32(ctx, 31, 0x2F6344u);
    ctx->pc = 0x2F6340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F633Cu;
            // 0x2f6340: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AA30u;
    if (runtime->hasFunction(0x31AA30u)) {
        auto targetFn = runtime->lookupFunction(0x31AA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6344u; }
        if (ctx->pc != 0x2F6344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CQuestDataFv_0x31aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6344u; }
        if (ctx->pc != 0x2F6344u) { return; }
    }
    ctx->pc = 0x2F6344u;
label_2f6344:
    // 0x2f6344: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f634c: 0x34212ec0  ori         $at, $at, 0x2EC0
    ctx->pc = 0x2f634cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11968);
    // 0x2f6350: 0x24061200  addiu       $a2, $zero, 0x1200
    ctx->pc = 0x2f6350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x2f6354: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F6354u;
    SET_GPR_U32(ctx, 31, 0x2F635Cu);
    ctx->pc = 0x2F6358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6354u;
            // 0x2f6358: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F635Cu; }
        if (ctx->pc != 0x2F635Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F635Cu; }
        if (ctx->pc != 0x2F635Cu) { return; }
    }
    ctx->pc = 0x2F635Cu;
label_2f635c:
    // 0x2f635c: 0xc0bd9e0  jal         func_2F6780
    ctx->pc = 0x2F635Cu;
    SET_GPR_U32(ctx, 31, 0x2F6364u);
    ctx->pc = 0x2F6360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F635Cu;
            // 0x2f6360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6780u;
    if (runtime->hasFunction(0x2F6780u)) {
        auto targetFn = runtime->lookupFunction(0x2F6780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6364u; }
        if (ctx->pc != 0x2F6364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBitCtrl__9CSaveDataFv_0x2f6780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6364u; }
        if (ctx->pc != 0x2F6364u) { return; }
    }
    ctx->pc = 0x2F6364u;
label_2f6364:
    // 0x2f6364: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f636c: 0x342143d0  ori         $at, $at, 0x43D0
    ctx->pc = 0x2f636cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17360);
    // 0x2f6370: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2f6370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f6374: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F6374u;
    SET_GPR_U32(ctx, 31, 0x2F637Cu);
    ctx->pc = 0x2F6378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6374u;
            // 0x2f6378: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F637Cu; }
        if (ctx->pc != 0x2F637Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F637Cu; }
        if (ctx->pc != 0x2F637Cu) { return; }
    }
    ctx->pc = 0x2F637Cu;
label_2f637c:
    // 0x2f637c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6380: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6384: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f6384u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f6388: 0xac2343dc  sw          $v1, 0x43DC($at)
    ctx->pc = 0x2f6388u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17372), GPR_U32(ctx, 3));
    // 0x2f638c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f638cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f639c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F639Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F63A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F639Cu;
            // 0x2f63a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F63A4u;
}
