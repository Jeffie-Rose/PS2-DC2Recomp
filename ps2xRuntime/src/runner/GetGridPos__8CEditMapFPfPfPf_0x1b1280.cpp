#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGridPos__8CEditMapFPfPfPf
// Address: 0x1b1280 - 0x1b135c
void GetGridPos__8CEditMapFPfPfPf_0x1b1280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGridPos__8CEditMapFPfPfPf_0x1b1280");
#endif

    switch (ctx->pc) {
        case 0x1b12c0u: goto label_1b12c0;
        case 0x1b12e0u: goto label_1b12e0;
        case 0x1b12fcu: goto label_1b12fc;
        default: break;
    }

    ctx->pc = 0x1b1280u;

    // 0x1b1280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b1284: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b1284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b1288: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b1288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b128c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b1290: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1b1290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1294: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b1294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b1298: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b1298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b129c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b12a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b12a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b12a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b12a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b12a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b12acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b12b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b12b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b12b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b12b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B12B8u;
    {
        const bool branch_taken_0x1b12b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12B8u;
            // 0x1b12bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12b8) {
            ctx->pc = 0x1B1320u;
            goto label_1b1320;
        }
    }
    ctx->pc = 0x1B12C0u;
label_1b12c0:
    // 0x1b12c0: 0x8c510f54  lw          $s1, 0xF54($v0)
    ctx->pc = 0x1b12c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x1b12c4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B12C4u;
    {
        const bool branch_taken_0x1b12c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12c4) {
            ctx->pc = 0x1B1318u;
            goto label_1b1318;
        }
    }
    ctx->pc = 0x1B12CCu;
    // 0x1b12cc: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x1b12ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b12d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b12d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12d4: 0xc68d0008  lwc1        $f13, 0x8($s4)
    ctx->pc = 0x1b12d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b12d8: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x1B12D8u;
    SET_GPR_U32(ctx, 31, 0x1B12E0u);
    ctx->pc = 0x1B12DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12D8u;
            // 0x1b12dc: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12E0u; }
        if (ctx->pc != 0x1B12E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12E0u; }
        if (ctx->pc != 0x1B12E0u) { return; }
    }
    ctx->pc = 0x1B12E0u;
label_1b12e0:
    // 0x1b12e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B12E0u;
    {
        const bool branch_taken_0x1b12e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12e0) {
            ctx->pc = 0x1B1318u;
            goto label_1b1318;
        }
    }
    ctx->pc = 0x1B12E8u;
    // 0x1b12e8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1b12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b12ec: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1b12ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12f0: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x1b12f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1b12f4: 0xc0a605c  jal         func_298170
    ctx->pc = 0x1B12F4u;
    SET_GPR_U32(ctx, 31, 0x1B12FCu);
    ctx->pc = 0x1B12F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12F4u;
            // 0x1b12f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298170u;
    if (runtime->hasFunction(0x298170u)) {
        auto targetFn = runtime->lookupFunction(0x298170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12FCu; }
        if (ctx->pc != 0x1B12FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverPos__9CEditGridFiiPf_0x298170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12FCu; }
        if (ctx->pc != 0x1B12FCu) { return; }
    }
    ctx->pc = 0x1B12FCu;
label_1b12fc:
    // 0x1b12fc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1b12fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1304: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1b1304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1b1308: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1b1308u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1b130c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1b130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1310: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1310u;
    {
        const bool branch_taken_0x1b1310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1310u;
            // 0x1b1314: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1310) {
            ctx->pc = 0x1B1334u;
            goto label_1b1334;
        }
    }
    ctx->pc = 0x1B1318u;
label_1b1318:
    // 0x1b1318: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b1318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b131c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b131cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1320:
    // 0x1b1320: 0x8ea20f50  lw          $v0, 0xF50($s5)
    ctx->pc = 0x1b1320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3920)));
    // 0x1b1324: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b1324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1328: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B1328u;
    {
        const bool branch_taken_0x1b1328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1328u;
            // 0x1b132c: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1328) {
            ctx->pc = 0x1B12C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b12c0;
        }
    }
    ctx->pc = 0x1B1330u;
    // 0x1b1330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1334:
    // 0x1b1334: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b1334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1338: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b1338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b133c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b133cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b1340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b134c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b134cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1354: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1354u;
            // 0x1b1358: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B135Cu;
}
